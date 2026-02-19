#include "RegistrarPacientesHija.h"
#include <wx/msgdlg.h>
#include "Consultorio.h" 
#include "Paciente.h"
#include "Fecha.h"
#include "Application.h"
RegistrarPacientesHija::RegistrarPacientesHija(wxWindow *parent) : RegistrarPacientesPrincipal(parent) {
	
}

RegistrarPacientesHija::~RegistrarPacientesHija() {
	
}

void RegistrarPacientesHija::ClickBotonCancelarHija( wxCommandEvent& event ) {
	Close(); // cierra la ventana
}

void RegistrarPacientesHija::OnAceptarClick( wxCommandEvent& event ) {
	
	// leemos los datos
	string nombre = m_txtNombre->GetValue().ToStdString();
	string apellido = m_txtApellido->GetValue().ToStdString();
	string telefono = m_txtTelefono->GetValue().ToStdString();
	string dni = m_txtDni->GetValue().ToStdString();
	string obraSocial = m_txtObraSocial->GetValue().ToStdString();
	
	int dia = wxAtoi(m_txtDia->GetValue());
	int mes = wxAtoi(m_txtMes->GetValue());
	int anio = wxAtoi(m_txtAnio->GetValue());
	int asignadas = wxAtoi(m_txtSesionesAsignadas->GetValue());
	
	// Valores por defecto
	int realizadas = 0;  // Empieza con 0 sesiones hechas
	bool pagas = false;  // Empieza con la deuda pendiente
	string diagnostico = "Sin diagnóstico";
	string observaciones = "Sin observaciones";
	
	// Creamos la fecha
	Fecha fechaInicio;
	fechaInicio.dia = dia;
	fechaInicio.mes = mes;
	fechaInicio.anio = anio;
	
	// Creamos el paciente
	Paciente* nuevoPaciente = new Paciente(nombre, apellido, telefono, dni, fechaInicio, diagnostico, obraSocial, asignadas, realizadas, observaciones, pagas);
	
	// Se guarda el paciente
	wxGetApp().m_consultorio->agregarPaciente(nuevoPaciente);
	wxGetApp().m_consultorio->guardarPacientes("pacientes.dat"); 
	
	// Paciente guardado 
	wxMessageBox("¡Paciente registrado con éxito!", "Éxito", wxOK | wxICON_INFORMATION);
	Close();
}
