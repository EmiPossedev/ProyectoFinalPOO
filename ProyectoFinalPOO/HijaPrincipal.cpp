#include "HijaPrincipal.h"

HijaPrincipal::HijaPrincipal(wxWindow *parent) : VentanaPrincipal(parent) {
	
}

HijaPrincipal::~HijaPrincipal() {
	
}


void HijaPrincipal::ClickBotonSalir( wxCommandEvent& event )  {
	Close();
}
