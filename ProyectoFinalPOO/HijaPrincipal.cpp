#include "HijaPrincipal.h"
#include "VentanaPacientesHija.h"
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

