#include "ReservarTurnoHija.h"
#include <wx/msgdlg.h>
#include <string>
using namespace std;

// El Constructor recibe y guarda el consultorio
ReservarTurnoHija::ReservarTurnoHija(wxWindow *parent, Consultorio *consultorio) : 
	ReservarTurnoPrincipal(parent), m_consultorio(consultorio) 
{
}

ReservarTurnoHija::~ReservarTurnoHija() {
}

// Cancelar
void ReservarTurnoHija::oncancelarReservaClick( wxCommandEvent& event )  {
	Close();
}

// Aceptar/Guardar
void ReservarTurnoHija::OnAceptarReservaClick( wxCommandEvent& event )  {
	
	string dniPac = m_textDniPaciente->GetValue().ToStdString();
	int dniKine = wxAtoi(m_textDniKine->GetValue());
	string hora = m_textHora->GetValue().ToStdString();
	string obs = m_textObservaciones->GetValue().ToStdString();
	
	// Armamos la Fecha leyendo los 3 cuadritos 
	int dia = wxAtoi(m_textCtrl7->GetValue());
	int mes = wxAtoi(m_textCtrl8->GetValue());
	int anio = wxAtoi(m_textCtrl9->GetValue());
	
	Fecha fechaTurno;
	fechaTurno.dia = dia;
	fechaTurno.mes = mes;
	fechaTurno.anio = anio;
	
	// Validaciones 
	if (dniPac.empty() || m_textDniKine->GetValue().IsEmpty() || hora.empty()) {
		wxMessageBox("Por favor, completá los DNI y la hora del turno.", "Error", wxOK | wxICON_ERROR);
		return; 
	}
	
	wxString eleccion = m_choiceInstalacion->GetStringSelection();
	
	bool usaCamilla = false;
	bool usaGimnasio = false;
	
	if (eleccion == "Camilla") {
		usaCamilla = true;
	} else if (eleccion == "Gimnasio") {
		usaGimnasio = true;
	} else if (eleccion == "Ambos") {
		usaCamilla = true;
		usaGimnasio = true;
	}
	// Vemos si el kine esta libre
	if (!m_consultorio->verificarDisponibilidadKinesiologo(dniKine, fechaTurno, hora)) {
		wxMessageBox("El kinesiólogo ya tiene un turno ocupado en esa fecha y hora.", "No disponible", wxOK | wxICON_EXCLAMATION);
		return; 
	}
	// vemos si hay camillas libres
	if (usaCamilla && !m_consultorio->verificarDisponibilidadCamilla(fechaTurno, hora)) {
		wxMessageBox("No hay camillas disponibles para esa fecha y hora.", "Sin camillas", wxOK | wxICON_EXCLAMATION);
		return;
	}
	// vemos si hay gimnasio libre
	if (usaGimnasio && !m_consultorio->verificarDisponibilidadGimnasio(fechaTurno, hora)) {
		wxMessageBox("El gimnasio alcanzó su capacidad máxima en esa fecha y hora.", "Gimnasio lleno", wxOK | wxICON_EXCLAMATION);
		return;
	}
	
	// si todo salio ok, armamos el Turno 
	Turno nuevoTurno;
	nuevoTurno.dniPaciente = dniPac;
	nuevoTurno.dniKinesiologo = dniKine;
	nuevoTurno.fecha = fechaTurno;
	nuevoTurno.hora = hora;
	nuevoTurno.estadoDelTurno = "Programado"; 
	nuevoTurno.observaciones = obs;
	nuevoTurno.requiereCamilla = usaCamilla; 
	nuevoTurno.requiereGimnasio = usaGimnasio; 
	
	// lo guardamos :)
	m_consultorio->agregarTurno(nuevoTurno);
	m_consultorio->guardarTurnos("turnos.dat");
	
	// chau
	wxMessageBox("¡Turno reservado con éxito!", "Éxito", wxOK | wxICON_INFORMATION);
	Close();
}
