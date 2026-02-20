#include "HijaBuscarPaciente.h"

HijaBuscarPaciente::HijaBuscarPaciente(wxWindow *parent, Consultorio *consultorio) : 
	BuscarPacienteHija(parent), m_consultorio(consultorio) {
	
}

HijaBuscarPaciente::~HijaBuscarPaciente() {

}

void HijaBuscarPaciente::OnBuscarPacClick( wxCommandEvent& event ) {
	
	
	
	event.Skip();
}
