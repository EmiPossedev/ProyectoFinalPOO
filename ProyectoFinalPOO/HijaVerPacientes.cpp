#include "HijaVerPacientes.h"
#include <wx/grid.h>
#include <wx/msgdlg.h> // Para los mensajes
#include "RegistrarPacientesHija.h"
#include "HijaModificarPaciente.h"

HijaVerPacientes::HijaVerPacientes(wxWindow *parent, Consultorio *consultorio) : 
	VerPacienteHija(parent), m_consultorio(consultorio) {
	for(size_t i=0 ; i<m_consultorio->getCantPacientes() ; i++) { 
		Paciente *p = m_consultorio->buscarPacientePorInd(i);
		m_grillaPacientes->AppendRows();
		m_grillaPacientes->SetCellValue(i,0, p->getNombre());
		m_grillaPacientes->SetCellValue(i,1, p->getApellido());
		m_grillaPacientes->SetCellValue(i,2, p->getTelefono());
		m_grillaPacientes->SetCellValue(i,3, p->getDni());
		m_grillaPacientes->SetCellValue(i,4, p->getFechaDeInicio().toString());
		m_grillaPacientes->SetCellValue(i,5, p->getDiagnostico());
		m_grillaPacientes->SetCellValue(i,6, p->getObraSocial());
		m_grillaPacientes->SetCellValue(i,7, to_string(p->getCantidadSesionesRealizadas()) + "/" + to_string(p->getCantSesionesTotales()));
		m_grillaPacientes->SetCellValue(i,8, p->getObservaciones());
		string pagoHecho;
		if (p->getSesionesPagas()){ pagoHecho = "Si"; } 
		else { pagoHecho = "No";}
		m_grillaPacientes->SetCellValue(i,9, pagoHecho);
	}
	
	// Esto es para q se seleccione toda la fila, no solo una celda.
	m_grillaPacientes->SetSelectionMode(wxGrid::wxGridSelectRows);
	
	m_grillaPacientes->EnableEditing(false);
	m_grillaPacientes->AutoSizeColumns();
	m_grillaPacientes->AutoSizeRows();
}

void HijaVerPacientes::RefrescarGrillaPacientes(){
	if (m_grillaPacientes->GetNumberRows() !=0){
			m_grillaPacientes->DeleteRows(0,m_grillaPacientes->GetNumberRows());
	}
	for(size_t i=0 ; i<m_consultorio->getCantPacientes() ; i++) { 
		Paciente *p = m_consultorio->buscarPacientePorInd(i);
		m_grillaPacientes->AppendRows();
		m_grillaPacientes->SetCellValue(i,0, p->getNombre());
		m_grillaPacientes->SetCellValue(i,1, p->getApellido());
		m_grillaPacientes->SetCellValue(i,2, p->getTelefono());
		m_grillaPacientes->SetCellValue(i,3, p->getDni());
		m_grillaPacientes->SetCellValue(i,4, p->getFechaDeInicio().toString());
		m_grillaPacientes->SetCellValue(i,5, p->getDiagnostico());
		m_grillaPacientes->SetCellValue(i,6, p->getObraSocial());
		m_grillaPacientes->SetCellValue(i,7, to_string(p->getCantidadSesionesRealizadas()) + "/" + to_string(p->getCantSesionesTotales()));
		m_grillaPacientes->SetCellValue(i,8, p->getObservaciones());
		string pagoHecho;
		if (p->getSesionesPagas()){ pagoHecho = "Si"; } 
			else { pagoHecho = "No";}
		m_grillaPacientes->SetCellValue(i,9, pagoHecho);
	}
	m_grillaPacientes->EnableEditing(false);
	m_grillaPacientes->AutoSizeColumns();
	m_grillaPacientes->AutoSizeRows();
}

HijaVerPacientes::~HijaVerPacientes() {
}

/// BOTONES

void HijaVerPacientes::OnVolverClick( wxCommandEvent& event ) {
	Close();
}

void HijaVerPacientes::OnModificarClick( wxCommandEvent& event ) {
	
	int filaSeleccionada = m_grillaPacientes->GetGridCursorRow();
	
	if (filaSeleccionada < 0) {
		wxMessageBox("Por favor, selecciona un paciente de la lista primero.", "Aviso", wxOK | wxICON_INFORMATION);
		return;
	}
	
	// Me quedo con el dni y obtengo los datos directamente de m_consultorio
	wxString dniTexto = m_grillaPacientes->GetCellValue(filaSeleccionada, 3);
	
	// Busco el paciente real en memoria
	Paciente *p = m_consultorio->buscarPacientePorDni(dniTexto.ToStdString());
	
	if (p != nullptr) {
		wxString nombre = p->getNombre();
		wxString apellido = p->getApellido();
		wxString telefono = p->getTelefono();
		wxString obraSocial = p->getObraSocial();
		
		// La fecha ya la tenemos separada en el struct, solo la pasamos a string
		wxString dia = to_string(p->getFechaDeInicio().dia);
		wxString mes = to_string(p->getFechaDeInicio().mes);
		wxString anio = to_string(p->getFechaDeInicio().anio);
		
		wxString asignadas = to_string(p->getCantSesionesTotales());
		wxString realizadas = to_string(p->getCantidadSesionesRealizadas());
		wxString obs = p->getObservaciones();
		
		// Formateo un poco el tema del pago de las sesiones porque lo tengo tengo guardado como un booleano
		wxString sesionesPagas;
		if (p->getSesionesPagas() == true) {
			sesionesPagas = "Si";
		} else {
			sesionesPagas = "No";
		}
		
		HijaModificarPaciente ventanaMod(this, m_consultorio); 
		ventanaMod.CargarDatos(nombre, apellido, dniTexto, telefono, obraSocial, sesionesPagas, dia, mes, anio, asignadas, realizadas, obs);
		
		// Si el usuario aceptó, refresco la grilla
		if (ventanaMod.ShowModal() == 1) {
			RefrescarGrillaPacientes();
		}
		
	} else {
		wxMessageBox("Error al buscar los datos del paciente.", "Error", wxOK | wxICON_ERROR);
	}
}

void HijaVerPacientes::OnEliminarClick( wxCommandEvent& event ) {
	
	// fila seleccionada
	int filaSeleccionada = m_grillaPacientes->GetGridCursorRow();
	
	if (filaSeleccionada < 0) {
		wxMessageBox("Por favor, selecciona un paciente de la lista primero.", "Aviso", wxOK | wxICON_INFORMATION);
		return; 
	}
	
	// Obtener DNI, nombre y apellido de la grilla
	// Nombre es 0, Apellido es 1, DNI es 3.
	wxString nombre = m_grillaPacientes->GetCellValue(filaSeleccionada, 0);
	wxString apellido = m_grillaPacientes->GetCellValue(filaSeleccionada, 1);
	wxString dni = m_grillaPacientes->GetCellValue(filaSeleccionada, 3); 
	
	// Doble confirmación por las dudas jajaja
	wxString mensaje = "¿Estás seguro de que querés eliminar a " + nombre + " " + apellido + " (DNI: " + dni + ") de forma permanente?";
	int respuesta = wxMessageBox(mensaje, "Confirmar eliminación", wxYES_NO | wxICON_EXCLAMATION);
	
	if (respuesta == wxYES) {
		
		// Borramos 
		m_consultorio->eliminarPacientePorDni(dni.ToStdString()); 
		m_consultorio->guardarPacientes("pacientes.dat");
		
		//actualizamos la grilla entera
		RefrescarGrillaPacientes();
		
		wxMessageBox("Paciente eliminado correctamente.", "Éxito", wxOK | wxICON_INFORMATION);
	}
}
void HijaVerPacientes::OnAgregarClick( wxCommandEvent& event ) {
	// Creamos la ventana de registro en la memoria 
	RegistrarPacientesHija ventanaRegistro(this, m_consultorio);
	
	// La mostramos en pantalla
	ventanaRegistro.ShowModal();
	// actualizamos
	RefrescarGrillaPacientes();
}
