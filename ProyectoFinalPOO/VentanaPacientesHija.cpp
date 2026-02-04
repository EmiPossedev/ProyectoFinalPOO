#include "VentanaPacientesHija.h"  // El archivo propio
#include "HijaBuscarPaciente.h"    // La ventana nueva que vamos a abrir
VentanaPacientesHija::VentanaPacientesHija(wxWindow *parent) : VentanaPacientesPrincipal(parent) {
	
}

VentanaPacientesHija::~VentanaPacientesHija() {
	
}


void VentanaPacientesHija::OnAbrirBusquedaClick( wxCommandEvent& event )  {
	
	HijaBuscarPaciente ventanaBusqueda(this);
	
	ventanaBusqueda.ShowModal();
	event.Skip();
}

