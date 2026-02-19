#include "VentanaKinesiologosHija.h"
#include "RegistrarKinesiologoHija.h"
#include "VerKinesiologosHija.h"
#include "BuscarkinesiologoHija.h"
#include "Consultorio.h"
VentanaKinesiologosHija::VentanaKinesiologosHija(wxWindow *parent, Consultorio *consultorio) : VentanaKinesiologosPrincipal1(parent), m_consultorio(consultorio) {
	
}

void VentanaKinesiologosHija::OnRegistrarKineClick( wxCommandEvent& event )  {
	RegistrarKinesiologoHija ventanaRegistro(this, m_consultorio);
	ventanaRegistro.ShowModal();
}

void VentanaKinesiologosHija::OnVerKinesClick( wxCommandEvent& event )  {
	VerKinesiologosHija ventanaVerKines(this, m_consultorio);
	ventanaVerKines.ShowModal();
}

void VentanaKinesiologosHija::OnBuscarKineClick( wxCommandEvent& event )  {
	BuscarkinesiologoHija ventanaBuscar(this, m_consultorio);
	ventanaBuscar.ShowModal();
}

void VentanaKinesiologosHija::OnVolverKinesClick( wxCommandEvent& event )  {
	Close();
}

VentanaKinesiologosHija::~VentanaKinesiologosHija() {
	
}

