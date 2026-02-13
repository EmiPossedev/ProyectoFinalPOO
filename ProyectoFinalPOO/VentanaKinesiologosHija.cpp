#include "VentanaKinesiologosHija.h"
#include "RegistrarKinesiologoHija.h"
VentanaKinesiologosHija::VentanaKinesiologosHija(wxWindow *parent) : VentanaKinesiologosPrincipal1(parent) {
	
}

void VentanaKinesiologosHija::OnRegistrarKineClick( wxCommandEvent& event )  {
	RegistrarKinesiologoHija ventanaRegistro(this);
	ventanaRegistro.ShowModal();
}

void VentanaKinesiologosHija::OnVerKinesClick( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaKinesiologosHija::OnBuscarKineClick( wxCommandEvent& event )  {
	event.Skip();
}

void VentanaKinesiologosHija::OnVolverKinesClick( wxCommandEvent& event )  {
	Close();
}

VentanaKinesiologosHija::~VentanaKinesiologosHija() {
	
}

