#include "RegistrarKinesiologoHija.h"

RegistrarKinesiologoHija::RegistrarKinesiologoHija(wxWindow *parent) : RegistrarKinesiologoPrincipal(parent) {
	
}

void RegistrarKinesiologoHija::OnCancelarKineClick( wxCommandEvent& event )  {
	event.Skip();
}

void RegistrarKinesiologoHija::OnAceptarKineClick( wxCommandEvent& event )  {
	event.Skip();
}

RegistrarKinesiologoHija::~RegistrarKinesiologoHija() {
	
}

