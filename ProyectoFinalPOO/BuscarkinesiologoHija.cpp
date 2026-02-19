#include "BuscarkinesiologoHija.h"

BuscarkinesiologoHija::BuscarkinesiologoHija(wxWindow *parent, Consultorio *consultorio) :
	BuscarKinesiologoPrincipal(parent), m_consultorio(consultorio) {
	
}

void BuscarkinesiologoHija::OnEjecutarBusquedaClick( wxCommandEvent& event )  {
	event.Skip();
}

BuscarkinesiologoHija::~BuscarkinesiologoHija() {
	
}

