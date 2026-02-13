#include "HijaPrincipal.h"
#include "VentanaPacientesHija.h"
#include "VentanaKinesiologosHija.h"
#include "VentanaTurnosHija.h"
HijaPrincipal::HijaPrincipal(wxWindow *parent) : VentanaPrincipal(parent) {
	
}

HijaPrincipal::~HijaPrincipal() {
	
}


void HijaPrincipal::ClickBotonSalir( wxCommandEvent& event )  {
	Close();
}

void HijaPrincipal::OnPacientesClick( wxCommandEvent& event )  {
	
	VentanaPacientesHija ventanaMenu(this);
	
	ventanaMenu.ShowModal();
	event.Skip();
}

void HijaPrincipal::OnKinesiologosClick( wxCommandEvent& event )  {
	
	VentanaKinesiologosHija ventanaMenuKines(this);
	ventanaMenuKines.ShowModal();
	
}
void HijaPrincipal::OnTurnosClick( wxCommandEvent& event ) {
	VentanaTurnosHija ventanaMenuTurnos(this);
	ventanaMenuTurnos.ShowModal();
}

void HijaPrincipal::OnKinesiologosClick( wxCommandEvent& event )  {
	event.Skip();
}

void HijaPrincipal::OnTurnosClick( wxCommandEvent& event )  {
	event.Skip();
}

