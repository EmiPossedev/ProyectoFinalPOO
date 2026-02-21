#include "VentanaAgendaTurnosHija.h"
#include "ReservarTurnoHija.h" // ¡Clave para que ande el botón Agregar!
#include <wx/grid.h>
#include <string>
#include <wx/msgdlg.h>

using namespace std;

VentanaAgendaTurnosHija::VentanaAgendaTurnosHija(wxWindow *parent, Consultorio *consultorio) :
	VentanaAgendaTurnosPrincipal(parent), m_consultorio(consultorio) { 
	
	// llenamos la grilla
	RefrescarGrillaTurnos();
}

VentanaAgendaTurnosHija::~VentanaAgendaTurnosHija() {
}

void VentanaAgendaTurnosHija::RefrescarGrillaTurnos() {
	
	// Limpiamos la grilla 
	if (m_grillaTurnos->GetNumberRows() != 0) {
		m_grillaTurnos->DeleteRows(0, m_grillaTurnos->GetNumberRows());
	}
	//ordenamos los turnos... top funcion
	m_consultorio->ordenarTurnos();
	
	// agarramos los turnos
	vector<Turno> listaTurnos = m_consultorio->getTurnos();
	
	// Recorremos los turnos y llenamos las columnas
	for (size_t i = 0; i < listaTurnos.size(); i++) {
		
		Turno t = listaTurnos[i];
		m_grillaTurnos->AppendRows();
		
		// DIA 
		string fechaStr = to_string(t.fecha.dia) + "/" + to_string(t.fecha.mes) + "/" + to_string(t.fecha.anio);
		m_grillaTurnos->SetCellValue(i, 0, fechaStr);
		
		// HORA
		m_grillaTurnos->SetCellValue(i, 1, t.hora);
		
		// Paciente 
		string nombrePac = m_consultorio->getNombrePaciente(t.dniPaciente) + " " + m_consultorio->getApellidoPaciente(t.dniPaciente);
		m_grillaTurnos->SetCellValue(i, 2, nombrePac);
		
		// Kinesiólogo
		string nombreKine = m_consultorio->getNombreKinesiologo(t.dniKinesiologo) + " " + m_consultorio->getApellidoKinesiologo(t.dniKinesiologo);
		m_grillaTurnos->SetCellValue(i, 3, nombreKine);
		
		// Camilla
		string usoCamilla;
		if (t.requiereCamilla) { 
			usoCamilla = "Sí"; 
		} else { 
			usoCamilla = "No"; 
		}
		m_grillaTurnos->SetCellValue(i, 4, usoCamilla);
		
		// Gimnasio
		string usoGimnasio;
		if (t.requiereGimnasio) { 
			usoGimnasio = "Sí"; 
		} else { 
			usoGimnasio = "No"; 
		}
		m_grillaTurnos->SetCellValue(i, 5, usoGimnasio);
		
		// Estado
		m_grillaTurnos->SetCellValue(i, 6, t.estadoDelTurno);
		
		// Observaciones
		m_grillaTurnos->SetCellValue(i, 7, t.observaciones);
	}
	
	// Bloqueamos edición y ajustamos estética
	m_grillaTurnos->EnableEditing(false);
	m_grillaTurnos->SetSelectionMode(wxGrid::wxGridSelectRows);
	m_grillaTurnos->AutoSizeColumns();
	m_grillaTurnos->AutoSizeRows();
}

///EVENTOS DE LOS BOTONES

void VentanaAgendaTurnosHija::OnVolverClick( wxCommandEvent& event )  {
	Close(); // Cerramos ventana
}

void VentanaAgendaTurnosHija::OnAgregarTurnoClick( wxCommandEvent& event )  {
	// Abrimos la ventana de reservas
	ReservarTurnoHija ventanaReserva(this, m_consultorio);
	ventanaReserva.ShowModal();
	
	//refrescamos para que se vea bien
	RefrescarGrillaTurnos();
}
/*En vez de leer el texto de las celdas de la grilla (como hicimos con los pacientes y kinesiólogos)
como llenamos la grilla leyendo el vector original de turnos desde el principio hasta el final, el número de fila seleccionada es 
exactamente el mismo índice que tiene el turno adentro de tu vector de memoria.(y esta ordenado por la funcion ordenarTurnos().
*/
void VentanaAgendaTurnosHija::OnEliminarTurnoClick( wxCommandEvent& event )  {
	
	// fila seleccionada?
	int filaSeleccionada = m_grillaTurnos->GetGridCursorRow();
	
	if (filaSeleccionada < 0) {
		wxMessageBox("Por favor, seleccioná un turno de la lista primero.", "Aviso", wxOK | wxICON_INFORMATION);
		return; 
	
	// Traemos la lista de turnos y sacamos el turno exacto usando el número de fila
	vector<Turno> listaTurnos = m_consultorio->getTurnos();
	Turno turnoABorrar = listaTurnos[filaSeleccionada];
	
	// preguntamos de nuevo 
	string nombrePaciente = m_consultorio->getNombrePaciente(turnoABorrar.dniPaciente) + " " + m_consultorio->getApellidoPaciente(turnoABorrar.dniPaciente);
	string fechaStr = to_string(turnoABorrar.fecha.dia) + "/" + to_string(turnoABorrar.fecha.mes) + "/" + to_string(turnoABorrar.fecha.anio);
	
	wxString mensaje = "¿Estás seguro de que querés cancelar el turno de " + nombrePaciente + " del día " + fechaStr + " a las " + turnoABorrar.hora + "?";
	
	int respuesta = wxMessageBox(mensaje, "Confirmar cancelación", wxYES_NO | wxICON_EXCLAMATION);
	
	if (respuesta == wxYES) {
		
		// Borramos del backend usando los datos exactos del objeto Turno
		m_consultorio->eliminarTurno(turnoABorrar.dniPaciente, turnoABorrar.fecha, turnoABorrar.hora);
		
		// Guardamos en el archivo 
		m_consultorio->guardarTurnos("turnos.dat");
		
		// Refrescamos
		RefrescarGrillaTurnos();
		
		wxMessageBox("El turno fue eliminado correctamente.", "Éxito", wxOK | wxICON_INFORMATION);
	}
}
}
void VentanaAgendaTurnosHija::OnModificarTurnoClick( wxCommandEvent& event )  {
	event.Skip(); //FALTA ESTOOOOOOOOOOOOOOOOOOOOOOOO
}
