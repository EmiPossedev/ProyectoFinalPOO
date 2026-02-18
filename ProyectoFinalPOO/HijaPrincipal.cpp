#include "HijaPrincipal.h"
#include "VentanaPacientesHija.h"
#include "VentanaKinesiologosHija.h"
#include "VentanaTurnosHija.h"
HijaPrincipal::HijaPrincipal(Consultorio *consultorio) : 
	VentanaPrincipal(nullptr), m_consultorio(consultorio){}

HijaPrincipal::~HijaPrincipal() {
	
}


void HijaPrincipal::ClickBotonSalir( wxCommandEvent& event )  {
	Close();
}

void HijaPrincipal::OnPacientesClick( wxCommandEvent& event )  {
	
	VentanaPacientesHija ventanaMenu(this, m_consultorio);
	
	ventanaMenu.ShowModal();
}

void HijaPrincipal::OnKinesiologosClick( wxCommandEvent& event )  {
	
	VentanaKinesiologosHija ventanaMenuKines(this, m_consultorio);
	ventanaMenuKines.ShowModal();
	
}
void HijaPrincipal::OnTurnosClick( wxCommandEvent& event ) {
	VentanaTurnosHija ventanaMenuTurnos(this, m_consultorio);
	ventanaMenuTurnos.ShowModal();
}



