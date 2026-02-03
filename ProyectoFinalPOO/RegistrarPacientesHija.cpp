#include "RegistrarPacientesHija.h"

RegistrarPacientesHija::RegistrarPacientesHija(wxWindow *parent) : RegistrarPacientesPrincipal(parent) {
	
}

RegistrarPacientesHija::~RegistrarPacientesHija() {
	
}

void RegistrarPacientesHija::ClickBotonCancelarHija( wxCommandEvent& event )  {
	Close();
}

