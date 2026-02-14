#include "ReservarTurnoHija.h"

ReservarTurnoHija::ReservarTurnoHija(wxWindow *parent) : ReservarTurnoPrincipal(parent) {
	
}

void ReservarTurnoHija::OnAceptarReservaClick( wxCommandEvent& event )  {
	event.Skip();
}

void ReservarTurnoHija::oncancelarReservaClick( wxCommandEvent& event )  {
	event.Skip();
}

ReservarTurnoHija::~ReservarTurnoHija() {
	
}

