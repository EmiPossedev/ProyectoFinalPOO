#include "HijaBuscarPaciente.h"
#include <wx/msgdlg.h> 

HijaBuscarPaciente::HijaBuscarPaciente(wxWindow *parent) : BuscarPacienteHija(parent) {
	
}

// Lo que pasa cuando tocas el botón "Buscar"
void HijaBuscarPaciente::OnBuscarClick( wxCommandEvent& event ) {
	event.Skip();
}

void HijaBuscarPaciente::m_botonVolverBuscarPaciente( wxCommandEvent& event )  {
	Close();
}

