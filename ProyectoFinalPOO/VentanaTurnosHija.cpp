#include "VentanaTurnosHija.h"
#include "ReservarTurnoHija.h"
#include "Consultorio.h"
#include "VentanaAgendaTurnosHija.h"
VentanaTurnosHija::VentanaTurnosHija(wxWindow *parent, Consultorio *consultorio) : 
	VentanaTurnosPrincipal(parent), m_consultorio(consultorio) {	
}

void VentanaTurnosHija::OnReservarTurnoClick( wxCommandEvent& event )  {
	//creamos
	ReservarTurnoHija ventanaReserva(this, m_consultorio);
	//mostramos
	ventanaReserva.ShowModal();
}

void VentanaTurnosHija::OnVerAgendaClick( wxCommandEvent& event )  {
	// Creamos la ventana pasandole el dueño (this) y consultorio
	VentanaAgendaTurnosHija ventanaAgenda(this, m_consultorio);
	
	// La mostramos en pantalla
	ventanaAgenda.ShowModal();
}

void VentanaTurnosHija::OnVolverTurnosClick( wxCommandEvent& event )  {
	Close();
}

VentanaTurnosHija::~VentanaTurnosHija() {
	
}

