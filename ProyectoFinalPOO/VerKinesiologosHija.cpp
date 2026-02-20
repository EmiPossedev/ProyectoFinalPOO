#include "VerKinesiologosHija.h"
#include <wx/grid.h> 
#include <wx/msgdlg.h>
#include "RegistrarKinesiologoHija.h"

VerKinesiologosHija::VerKinesiologosHija(wxWindow *parent, Consultorio *consultorio) :
	VerKinesiologosPrincipal(parent), m_consultorio(consultorio) 
{
	// Llenamos la grilla
	for(int i = 0 ; i < m_consultorio->getCantKinesiologos() ; i++){
		
		// Buscamos al kinesiologo 
		Kinesiologo *k = m_consultorio->buscarKinesiologoPorInd(i);
		
		// Agregamos una fila en blanco
		m_grillaKinesiologos->AppendRows();
		
		m_grillaKinesiologos->SetCellValue(i, 0, k->getNombre());
		m_grillaKinesiologos->SetCellValue(i, 1, k->getApellido());
		m_grillaKinesiologos->SetCellValue(i, 2, k->getTelefono());
		m_grillaKinesiologos->SetCellValue(i, 3, k->getDni());
		m_grillaKinesiologos->SetCellValue(i, 5, to_string(k->getMatricula())); 
		m_grillaKinesiologos->SetCellValue(i, 4, k->getEspecialidad());
		m_grillaKinesiologos->SetCellValue(i, 6, to_string(k->getCantidadPacientesAtendidos())); 
	}
	
	m_grillaKinesiologos->SetSelectionMode(wxGrid::wxGridSelectRows);
	
	// Bloqueamos la edición manual de las celdas
	m_grillaKinesiologos->EnableEditing(false);
	
	// Ajustamos el tamaño de las celdas 
	m_grillaKinesiologos->AutoSizeColumns();
	m_grillaKinesiologos->AutoSizeRows();
}

void VerKinesiologosHija::VolverListaKinesiologos( wxCommandEvent& event )  {
	Close();
}
//La misma de paciente adaptada a kinesiologo
void VerKinesiologosHija::RefrescarGrillaKinesiologos(){
	
	if (m_grillaKinesiologos->GetNumberRows() != 0){
		m_grillaKinesiologos->DeleteRows(0, m_grillaKinesiologos->GetNumberRows());
	}
	
	for(int i=0 ; i<m_consultorio->getCantKinesiologos() ; i++) { 
		Kinesiologo *k = m_consultorio->buscarKinesiologoPorInd(i);
		m_grillaKinesiologos->AppendRows();
		
		m_grillaKinesiologos->SetCellValue(i, 0, k->getNombre());
		m_grillaKinesiologos->SetCellValue(i, 1, k->getApellido());
		m_grillaKinesiologos->SetCellValue(i, 2, k->getTelefono());
		m_grillaKinesiologos->SetCellValue(i, 3, k->getDni());
		m_grillaKinesiologos->SetCellValue(i, 4, to_string(k->getMatricula()));  
		m_grillaKinesiologos->SetCellValue(i, 5, k->getEspecialidad());
		m_grillaKinesiologos->SetCellValue(i, 6, to_string(k->getCantidadPacientesAtendidos())); 
	}
	
	m_grillaKinesiologos->EnableEditing(false);
	m_grillaKinesiologos->AutoSizeColumns();
	m_grillaKinesiologos->AutoSizeRows();
}

VerKinesiologosHija::~VerKinesiologosHija() {
	
}

void VerKinesiologosHija::OnEliminarClick( wxCommandEvent& event ) {
	//Seleccionar fila
	int filaSeleccionada = m_grillaKinesiologos->GetGridCursorRow();
	
	if (filaSeleccionada < 0) {
		wxMessageBox("Por favor, selecciona un kinesiólogo de la lista primero.", "Aviso", wxOK | wxICON_INFORMATION);
		return; 
	}
	
	// Obtener info
	wxString nombre = m_grillaKinesiologos->GetCellValue(filaSeleccionada, 0);
	wxString apellido = m_grillaKinesiologos->GetCellValue(filaSeleccionada, 1);
	wxString dni = m_grillaKinesiologos->GetCellValue(filaSeleccionada, 3); // Columna 3 es el DNI
	
	wxString mensaje = "¿Estás seguro de que querés eliminar al kinesiólogo " + nombre + " " + apellido + " (DNI: " + dni + ") de forma permanente?";
	int respuesta = wxMessageBox(mensaje, "Confirmar eliminación", wxYES_NO | wxICON_EXCLAMATION);
	
	if (respuesta == wxYES) {
		
		m_consultorio->eliminarKinesiologoPorDni(dni.ToStdString()); 
		m_consultorio->guardarKinesiologos("kinesiologos.dat");
	
		RefrescarGrillaKinesiologos();
		
		wxMessageBox("Kinesiólogo eliminado correctamente.", "Éxito", wxOK | wxICON_INFORMATION);
	}
}

void VerKinesiologosHija::OnAgregarClick( wxCommandEvent& event ) {

	RegistrarKinesiologoHija ventanaRegistro(this, m_consultorio);
	
	ventanaRegistro.ShowModal();
	
	RefrescarGrillaKinesiologos(); 
}
