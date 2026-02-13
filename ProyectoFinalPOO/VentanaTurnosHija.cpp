#include "VentanaTurnosHija.h"

VentanaTurnosHija::VentanaTurnosHija(wxWindow *parent) : VentanaTurnosPrincipal(parent) {
	
}

void VentanaTurnosHija::OnReservarTurnoClick( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaTurnosHija::OnVerAgendaClick( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaTurnosHija::OnModificarTurnoClick( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaTurnosHija::OnCancelarTurnoClick( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaTurnosHija::OnVolverTurnosClick( wxCommandEvent& event )  {
	Close();
}

VentanaTurnosHija::~VentanaTurnosHija() {
	
}

