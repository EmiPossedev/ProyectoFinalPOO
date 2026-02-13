#include "BuscarkinesiologoHija.h"

BuscarkinesiologoHija::BuscarkinesiologoHija(wxWindow *parent) : BuscarKinesiologoPrincipal(parent) {
	
}

void BuscarkinesiologoHija::OnEjecutarBusquedaClick( wxCommandEvent& event )  {
	event.Skip();
}

void BuscarkinesiologoHija::OnVolverBuscarKineClick( wxCommandEvent& event )  {
	Close();
}

BuscarkinesiologoHija::~BuscarkinesiologoHija() {
	
}

