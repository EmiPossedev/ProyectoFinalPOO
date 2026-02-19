#include "HijaVerPacientes.h"
#include <wx/grid.h>
#include <wx/msgdlg.h> // Para los mensajes
#include "RegistrarPacientesHija.h"
#include "HijaModificarPaciente.h"

HijaVerPacientes::HijaVerPacientes(wxWindow *parent) : VerPacienteHija(parent) {
	
	m_grillaPacientes->AppendCols(7); // Agregamos 7 columnas
	m_grillaPacientes->AppendRows(1); // Agregamos 1 fila
	
	m_grillaPacientes->SetColLabelValue(0, "Nombre");
	m_grillaPacientes->SetColLabelValue(1, "Apellido");
	m_grillaPacientes->SetColLabelValue(2, "DNI");
	m_grillaPacientes->SetColLabelValue(3, "Teléfono");
	m_grillaPacientes->SetColLabelValue(4, "Obra Social");
	m_grillaPacientes->SetColLabelValue(5, "Sesiones Pagas");
	m_grillaPacientes->SetColLabelValue(6, "Sesiones (Real/Tot)");
	
	m_grillaPacientes->SetCellValue(0, 0, "Albertina");
	m_grillaPacientes->SetCellValue(0, 1, "Giannone");
	m_grillaPacientes->SetCellValue(0, 2, "41490773");
	m_grillaPacientes->SetCellValue(0, 3, "3425856780");
	m_grillaPacientes->SetCellValue(0, 4, "Ospac");
	m_grillaPacientes->SetCellValue(0, 5, "Sí");
	m_grillaPacientes->SetCellValue(0, 6, "1/7");
	
	// TRUCO DE MAGIA: Hace que al hacer clic, se seleccione toda la fila azul, no solo una celda.
	// Esto es ideal para el botón Eliminar/Modificar
	m_grillaPacientes->SetSelectionMode(wxGrid::wxGridSelectRows);
	
	m_grillaPacientes->EnableEditing(false);
	m_grillaPacientes->AutoSizeColumns();
}

HijaVerPacientes::~HijaVerPacientes() {
}

// --- ACCIONES DE LOS BOTONES ---

void HijaVerPacientes::OnVolverClick( wxCommandEvent& event ) {
	Close();
}

void HijaVerPacientes::OnModificarClick( wxCommandEvent& event ) {
	
	int filaSeleccionada = m_grillaPacientes->GetGridCursorRow();
	
	if (filaSeleccionada < 0) {
		wxMessageBox("Por favor, selecciona un paciente de la lista primero.", "Aviso", wxOK | wxICON_INFORMATION);
		return;
	}
	
	// Agarramos los datos 
	wxString nombre = m_grillaPacientes->GetCellValue(filaSeleccionada, 0);
	wxString apellido = m_grillaPacientes->GetCellValue(filaSeleccionada, 1);
	wxString dni = m_grillaPacientes->GetCellValue(filaSeleccionada, 2);
	wxString telefono = m_grillaPacientes->GetCellValue(filaSeleccionada, 3);
	wxString obraSocial = m_grillaPacientes->GetCellValue(filaSeleccionada, 4);
	wxString sesionesPagas = m_grillaPacientes->GetCellValue(filaSeleccionada, 5);
	
	
	wxString sesionesJuntas = m_grillaPacientes->GetCellValue(filaSeleccionada, 6);
	wxString realizadas = sesionesJuntas.BeforeFirst('/'); 
	wxString asignadas = sesionesJuntas.AfterFirst('/');   
	
	// Como la grilla no tiene la fecha, le pasamos textos vacíos por ahora
	wxString dia = "";
	wxString mes = "";
	wxString anio = "";
	
	// Creamos la ventana y le metemos toda la info
	HijaModificarPaciente ventanaMod(this);
	ventanaMod.CargarDatos(nombre, apellido, dni, telefono, obraSocial, sesionesPagas, dia, mes, anio, asignadas, realizadas);
	
	ventanaMod.ShowModal();
}

void HijaVerPacientes::OnEliminarClick( wxCommandEvent& event ) {
	// Lógica básica de cómo funcionará el eliminar
	int filaSeleccionada = m_grillaPacientes->GetGridCursorRow();
	
	if (filaSeleccionada >= 0) {
		wxString nombre = m_grillaPacientes->GetCellValue(filaSeleccionada, 0);
		wxMessageBox("Acá eliminaremos a: " + nombre, "Aviso");
	} else {
		wxMessageBox("Primero debes seleccionar un paciente de la lista", "Error");
	}
}

void HijaVerPacientes::OnAgregarClick( wxCommandEvent& event ) {
	// Creamos la ventana de registro en la memoria 
	RegistrarPacientesHija ventanaRegistro(this);
	
	// La mostramos en pantalla
	ventanaRegistro.ShowModal();
	
	//Falta codigo para que se actualice la grilla posse
}
