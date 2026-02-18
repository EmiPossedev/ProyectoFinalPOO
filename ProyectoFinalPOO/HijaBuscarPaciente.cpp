#include "HijaBuscarPaciente.h"
#include <wx/msgdlg.h> 

HijaBuscarPaciente::HijaBuscarPaciente(wxWindow *parent) : BuscarPacienteHija(parent) {
	
}

// Lo que pasa cuando tocas el botón "Buscar"
void HijaBuscarPaciente::OnBuscarClick( wxCommandEvent& event ) {
	
	// Obtener lo que escribió el usuario en la cajita
	wxString dniIngresado = m_txtDniBuscar->GetValue();
	
	// Verificar si está vacío
	if (dniIngresado.IsEmpty()) {
		wxMessageBox("¡Debes escribir un DNI!", "Error", wxOK | wxICON_ERROR);
		return;
	}
	
	// Simulación de búsqueda (Más adelante conectaremos esto con los archivos reales)
	if (dniIngresado == "111") {
		m_lblResultado->SetLabel("Paciente: TOMAS (Admin)");
		// Pintar el texto de Azul
		m_lblResultado->SetForegroundColour(wxColour(0, 0, 255)); 
	} 
	else {
		m_lblResultado->SetLabel("Paciente NO ENCONTRADO");
		
		m_lblResultado->SetForegroundColour(wxColour(255, 0, 0));
	}
	
	// Refrescar la ventana para que se acomoden los textos
	this->Layout();
}

void HijaBuscarPaciente::m_botonVolverBuscarPaciente( wxCommandEvent& event )  {
	Close();
}

