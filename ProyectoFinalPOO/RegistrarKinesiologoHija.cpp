#include "RegistrarKinesiologoHija.h"

RegistrarKinesiologoHija::RegistrarKinesiologoHija(wxWindow *parent, Consultorio *consultorio) : 
	RegistrarKinesiologoPrincipal(parent),  m_consultorio(consultorio) {
	
}

void RegistrarKinesiologoHija::OnCancelarKineClick( wxCommandEvent& event )  {
	event.Skip();
}

void RegistrarKinesiologoHija::OnAceptarKineClick( wxCommandEvent& event )  {
	event.Skip();
}

RegistrarKinesiologoHija::~RegistrarKinesiologoHija() {
	
}

