#include "VentanaTurnosHija.h"
#include "ReservarTurnoHija.h"
VentanaTurnosHija::VentanaTurnosHija(wxWindow *parent) : VentanaTurnosPrincipal(parent) {
	
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

void VentanaTurnosHija::OnCancelarTurnoClick( wxCommandEvent& event )  {
	Close();
}

void VentanaTurnosHija::OnVolverTurnosClick( wxCommandEvent& event )  {
	Close();
}

VentanaTurnosHija::~VentanaTurnosHija() {
	
}

