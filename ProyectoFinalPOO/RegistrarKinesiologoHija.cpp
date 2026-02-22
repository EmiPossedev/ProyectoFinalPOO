#include "RegistrarKinesiologoHija.h"
#include <wx/msgdlg.h> //libreria mensajes
RegistrarKinesiologoHija::RegistrarKinesiologoHija(wxWindow *parent, Consultorio *consultorio) : 
	RegistrarKinesiologoPrincipal(parent),  m_consultorio(consultorio) {
	
}

void RegistrarKinesiologoHija::OnCancelarKineClick( wxCommandEvent& event )  {
	Close();
}

void RegistrarKinesiologoHija::OnAceptarKineClick( wxCommandEvent& event ) {
	
	// guardamos los datos de las cajitas
	string nombre = m_textNombreKine->GetValue().ToStdString();
	string apellido = m_textApellidoKine->GetValue().ToStdString();
	string telefono = m_textTelefonoKine->GetValue().ToStdString();
	string dni = m_textDniKine->GetValue().ToStdString(); 
	string especialidad = m_textEspecialidadKine->GetValue().ToStdString();
	int matricula = wxAtoi(m_textMatriculaKine->GetValue()); 
	
	// Valor automático para un kinesiólogo nuevo
	int pacientesAtendidos = 0; 
	
	// llamamos al cosntructor
	Kinesiologo* nuevoKine = new Kinesiologo(nombre, apellido, telefono, dni, matricula,especialidad, pacientesAtendidos);
	
	// guardamos
	m_consultorio->agregarKinesiologo(nuevoKine);
	m_consultorio->guardarKinesiologos("kinesiologos.dat");
	
	
	wxMessageBox("¡Kinesiólogo registrado con éxito!", "Éxito", wxOK | wxICON_INFORMATION);
	EndModal(1);
}

RegistrarKinesiologoHija::~RegistrarKinesiologoHija() {
	
}

