#include "HijaModificarPaciente.h"

HijaModificarPaciente::HijaModificarPaciente(wxWindow *parent) : ModificarPacientePrincipal(parent) {
	
}

void HijaModificarPaciente::OnCancelarModClick( wxCommandEvent& event )  {
	event.Skip();
}

void HijaModificarPaciente::OnGuardarModClick( wxCommandEvent& event )  {
	event.Skip();
}

HijaModificarPaciente::~HijaModificarPaciente() {
	
}

void HijaModificarPaciente::CargarDatos(wxString nombre, wxString apellido, wxString dni, wxString telefono, wxString obraSocial, wxString sesionesPagas, wxString dia, wxString mes, wxString anio, wxString asignadas, wxString realizadas) {
	
	m_txtNombre->SetValue(nombre);
	m_txtApellido->SetValue(apellido);
	m_txtDni->SetValue(dni);
	m_txtTelefono->SetValue(telefono);
	m_txtObraSocial->SetValue(obraSocial);
	m_txtSesionesPagasMod->SetValue(sesionesPagas); 
	
	m_txtDia->SetValue(dia);
	m_txtMes->SetValue(mes);
	m_txtAnio->SetValue(anio);
	
	m_txtSesionesAsignadas->SetValue(asignadas);
	m_txtSesionesRealizadasMod->SetValue(realizadas);
}
