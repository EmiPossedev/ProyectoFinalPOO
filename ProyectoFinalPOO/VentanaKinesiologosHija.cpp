#include "VentanaKinesiologosHija.h"
#include "RegistrarKinesiologoHija.h"
#include "VerKinesiologosHija.h"
#include "BuscarkinesiologoHija.h"
VentanaKinesiologosHija::VentanaKinesiologosHija(wxWindow *parent) : VentanaKinesiologosPrincipal1(parent) {
	
}

void VentanaKinesiologosHija::OnRegistrarKineClick( wxCommandEvent& event )  {
	RegistrarKinesiologoHija ventanaRegistro(this);
	ventanaRegistro.ShowModal();
}

void VentanaKinesiologosHija::OnVerKinesClick( wxCommandEvent& event )  {
	VerKinesiologosHija ventanaVerKines(this);
	ventanaVerKines.ShowModal();
}

void VentanaKinesiologosHija::OnBuscarKineClick( wxCommandEvent& event )  {
	BuscarkinesiologoHija ventanaBuscar(this);
	ventanaBuscar.ShowModal();
}

void VentanaKinesiologosHija::OnVolverKinesClick( wxCommandEvent& event )  {
	Close();
}

VentanaKinesiologosHija::~VentanaKinesiologosHija() {
	
}

