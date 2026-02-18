#include "VentanaTurnosHija.h"
#include "ReservarTurnoHija.h"
#include "Consultorio.h"
VentanaTurnosHija::VentanaTurnosHija(wxWindow *parent, Consultorio *consultorio) : VentanaTurnosPrincipal(parent), m_consultorio(consultorio) {
	
}

void VentanaTurnosHija::OnReservarTurnoClick( wxCommandEvent& event )  {
	ReservarTurnoHija ventanaReserva(this);
	ventanaReserva.ShowModal();
}

void VentanaTurnosHija::OnVerAgendaClick( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaTurnosHija::OnModificarTurnoClick( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaTurnosHija::OnVolverTurnosClick( wxCommandEvent& event )  {
	Close();
}

VentanaTurnosHija::~VentanaTurnosHija() {
	
}

