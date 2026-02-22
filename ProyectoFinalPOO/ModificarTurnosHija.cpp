#include "ModificarTurnosHija.h"
#include <wx/msgdlg.h>
#include <string>

using namespace std;

ModificarTurnosHija::ModificarTurnosHija(wxWindow *parent, Consultorio *consultorio, Turno turnoOriginal) : 
	ModificarTurnosPrincipal(parent), m_consultorio(consultorio), m_turnoOriginal(turnoOriginal) 
{
	// Cargar DNI del paciente 
	m_textDniPacienteMod->SetValue(m_turnoOriginal.dniPaciente);
	
	// Cargar la lista de Kinesiólogos y seleccionar al que ya tenía el turno
	vector<Kinesiologo*> listaKines = m_consultorio->getKinesiologos();
	int indiceSeleccionado = 0;
	for(size_t i = 0; i < listaKines.size(); i++) {
		string nombreLindo = listaKines[i]->getNombre() + " " + listaKines[i]->getApellido();
		m_choiceKinesiologoMod->Append(nombreLindo);
		
		// Comparamos el DNI (stoi converitr texto a numero entero)
		if(stoi(listaKines[i]->getDni()) == m_turnoOriginal.dniKinesiologo) {
			indiceSeleccionado = i;
		}
	}
	if(!listaKines.empty()) {
		m_choiceKinesiologoMod->SetSelection(indiceSeleccionado);
	}
	
	// Cargar Fecha y Hora viejas
	m_textDiaMod->SetValue(to_string(m_turnoOriginal.fecha.dia));
	m_textMesMod->SetValue(to_string(m_turnoOriginal.fecha.mes));
	m_textAnioMod->SetValue(to_string(m_turnoOriginal.fecha.anio));
	m_textHoraMod->SetValue(m_turnoOriginal.hora);
	
	// Cargar Instalación
	if(m_turnoOriginal.requiereGimnasio) {
		m_choiceInstalacionMod->SetStringSelection("Gimnasio");
	} else {
		m_choiceInstalacionMod->SetStringSelection("Camilla");
	}
	
	// Cargar Estado
	m_choiceEstadoMod->SetStringSelection(m_turnoOriginal.estadoDelTurno);
	
	// Cargar Observaciones
	m_textObservacionesMod->SetValue(m_turnoOriginal.observaciones);
} 

ModificarTurnosHija::~ModificarTurnosHija() {
}

void ModificarTurnosHija::OnCancelarModClick( wxCommandEvent& event )  {
	EndModal(0); // Cerramos sin hacer nada
}

void ModificarTurnosHija::OnGuardarModClick( wxCommandEvent& event )  {
	
	// Leemos las cajitas 
	int dia = wxAtoi(m_textDiaMod->GetValue());
	int mes = wxAtoi(m_textMesMod->GetValue());
	int anio = wxAtoi(m_textAnioMod->GetValue());
	string nuevaHora = m_textHoraMod->GetValue().ToStdString();
	string nuevasObs = m_textObservacionesMod->GetValue().ToStdString();
	string nuevoEstado = m_choiceEstadoMod->GetStringSelection().ToStdString();
	
	Fecha nuevaFecha;
	nuevaFecha.dia = dia; 
	nuevaFecha.mes = mes; 
	nuevaFecha.anio = anio;
	
	wxString inst = m_choiceInstalacionMod->GetStringSelection();
	bool reqCam = (inst == "Camilla" || inst == "Ambos");
	bool reqGim = (inst == "Gimnasio" || inst == "Ambos");
	
	int kineIndex = m_choiceKinesiologoMod->GetSelection();
	if (kineIndex == wxNOT_FOUND) return;
	int nuevoDniKine = stoi(m_consultorio->getKinesiologos()[kineIndex]->getDni());
	
	// al modificar las cosas dbemos ver si no superpone otro existente
	bool cambioLugar = (m_turnoOriginal.dniKinesiologo != nuevoDniKine || !(m_turnoOriginal.fecha == nuevaFecha) || m_turnoOriginal.hora != nuevaHora);
	
	if (cambioLugar) {
		if (!m_consultorio->verificarDisponibilidadKinesiologo(nuevoDniKine, nuevaFecha, nuevaHora)) {
			wxMessageBox("El kinesiólogo ya está ocupado en ese nuevo horario.", "Error", wxOK | wxICON_ERROR);
			return; //sali de aca no se puede cambiar
		}
	}
	
	// Armamos el turno con los datos
	Turno turnoActualizado;
	turnoActualizado.dniPaciente = m_turnoOriginal.dniPaciente; 
	turnoActualizado.dniKinesiologo = nuevoDniKine;
	turnoActualizado.fecha = nuevaFecha;
	turnoActualizado.hora = nuevaHora;
	turnoActualizado.estadoDelTurno = nuevoEstado;
	turnoActualizado.observaciones = nuevasObs;
	turnoActualizado.requiereCamilla = reqCam;
	turnoActualizado.requiereGimnasio = reqGim;
	
	// llamamos a la funcion que actualiza el turno
	m_consultorio->actualizarTurno(m_turnoOriginal, turnoActualizado);
	
	wxMessageBox("¡Turno actualizado con éxito!", "Éxito", wxOK | wxICON_INFORMATION);
	EndModal(1); //cerramos mandando un ok
}
