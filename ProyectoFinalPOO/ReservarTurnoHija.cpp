#include "ReservarTurnoHija.h"
#include <wx/msgdlg.h>
#include <string>
using namespace std;

// El Constructor recibe y guarda el consultorio
ReservarTurnoHija::ReservarTurnoHija(wxWindow *parent, Consultorio *consultorio) : 
	ReservarTurnoPrincipal(parent), m_consultorio(consultorio) 
{
	// Vacío las opciones por las dudas
	m_opcionesKinesiologos->Clear();
	
	// Me guardo la cantidad de kinesiologos
	int cantidadKines = m_consultorio->getCantKinesiologos();
	
	for(int i = 0; i < cantidadKines; i++) {
		
		// Agarro al kinesiólogo
		Kinesiologo *k = m_consultorio->buscarKinesiologoPorInd(i);
		
		if (k != nullptr) {
			// Junto el nombre y apellido con un espacio en el medio
			string nombreCompleto = k->getNombre() + " " + k->getApellido();
			
			// Agrego las opciones al wxChoice
			m_opcionesKinesiologos->Append(nombreCompleto);
		}
	}
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
	int dniKine = 0;
	string hora = m_textHora->GetValue().ToStdString();
	string obs = m_textObservaciones->GetValue().ToStdString();
	// Para validar que el usuario si o si elija una opcion
	int indiceElegido = m_opcionesKinesiologos->GetSelection();
	if (indiceElegido != wxNOT_FOUND) {
		Kinesiologo *k = m_consultorio->buscarKinesiologoPorInd(indiceElegido);
		// Le saco el dni de la memoria
		dniKine = stoi(k->getDni());
	}
	// Armamos la Fecha leyendo los 3 cuadritos 
	int dia = wxAtoi(m_textCtrl7->GetValue());
	int mes = wxAtoi(m_textCtrl8->GetValue());
	int anio = wxAtoi(m_textCtrl9->GetValue());
	
	Fecha fechaTurno;
	fechaTurno.dia = dia;
	fechaTurno.mes = mes;
	fechaTurno.anio = anio;
	
	// Valido que el usuario haya llenado lo necesario(esta idea fue de Gemini)
	if (dniPac.empty() || indiceElegido == wxNOT_FOUND || hora.empty()) {
		wxMessageBox("Por favor, completá el DNI del paciente, elegí un Kinesiólogo y la hora del turno.", "Error", wxOK | wxICON_ERROR);
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
	EndModal(1);
}
