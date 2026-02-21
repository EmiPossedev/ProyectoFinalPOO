#include "VentanaPacientesHija.h"  // El archivo propio
#include "HijaBuscarPaciente.h"    // La ventana nueva que vamos a abrir
#include "RegistrarPacientesHija.h"
#include "HijaVerPacientes.h"
VentanaPacientesHija::VentanaPacientesHija(wxWindow *parent, Consultorio *consultorio) : VentanaPacientesPrincipal(parent), m_consultorio(consultorio) {
	
}

VentanaPacientesHija::~VentanaPacientesHija() {
	
}

void VentanaPacientesHija::OnRegistrarClick( wxCommandEvent& event )  {
	// Creamos la ventana de registro 
	RegistrarPacientesHija ventanaRegistro(this, m_consultorio);
	
	// La mostramos y congelamos la de atrás (Modal)
	ventanaRegistro.ShowModal();
	
	event.Skip();
}

void VentanaPacientesHija::OnVerListaClick( wxCommandEvent& event ) {
	
	// Creamos la ventana de la lista
	HijaVerPacientes ventanaListado(this, m_consultorio);
	
	// La mostramos
	ventanaListado.ShowModal();
	
	event.Skip();
}

void VentanaPacientesHija::botonVolverPacientesPrincipal( wxCommandEvent& event )  {
	Close();
}

