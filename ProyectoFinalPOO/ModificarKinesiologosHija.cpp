#include "ModificarKinesiologosHija.h"
#include <wx/msgdlg.h>

ModificarKinesiologosHija::ModificarKinesiologosHija(wxWindow *parent, Consultorio *consultorio) :
	ModificarKinesiologosPrincipal(parent), m_consultorio(consultorio) {
	
}

ModificarKinesiologosHija::~ModificarKinesiologosHija() {
	
}

void ModificarKinesiologosHija::ClickBotonAceptarMod( wxCommandEvent& event )  {
	// Leo el dni de la cajita
	int dniBuscado = wxAtoi(m_textDni->GetValue());
	
	// Ahora lo busco en memoria
	Kinesiologo *k = m_consultorio->buscarKinesiologoPorDni(dniBuscado);
	
	if(k != nullptr)
	{
		// Obtengo los datos nuevos que ingresó el usuario
		string nuevoNombre  = m_textNombre->GetValue().ToStdString();
		string nuevoApellido = m_textApellido->GetValue().ToStdString();
		string nuevoTelefono = m_textTelefono->GetValue().ToStdString();
		string nuevaEspecialidad = m_textEspecialidad->GetValue().ToStdString();
		int nuevaMatricula = wxAtoi(m_textMatricula->GetValue());
		int nuevosPacientes = wxAtoi(m_textCantPacientesAtend->GetValue());
		
		// Los modifico en memoria
		k->setNombre(nuevoNombre);
		k->setApellido(nuevoApellido);
		k->setTelefono(nuevoTelefono);
		k->setEspecialidad(nuevaEspecialidad);
		k->setMatricula(nuevaMatricula);
		k->setCantPacientesAtendidos(nuevosPacientes);
		
		// Lo guardo en memoria para no perder los cambios
		m_consultorio->guardarKinesiologos("kinesiologos.dat");

		// Y le muestro al usuario una ventanita diciendo que todo salió bien
		wxMessageBox("Los datos del Kinesiólogo se modificaron correctamente.", "Exito", wxOK | wxICON_INFORMATION);
		EndModal(1); // Cerramos la ventana avisando que todo salió bien
	} else {
		wxMessageBox("Error al buscar al Kinesiólogo.", "Error", wxOK | wxICON_ERROR);
	}
}

void ModificarKinesiologosHija::CargarDatos(wxString nombre, wxString apellido, wxString dni, wxString telefono, wxString especialidad, wxString matricula, wxString cantPacientes) {
	
	m_textNombre->SetValue(nombre);
	m_textApellido->SetValue(apellido);
	m_textDni->SetValue(dni);
	m_textDni->Disable(); // Para que el usuario no lo pueda modificar porque sino se arruina todo el código y el funcionamiento buscando por dni
	m_textTelefono->SetValue(telefono);
	m_textEspecialidad->SetValue(especialidad);
	m_textMatricula->SetValue(matricula);
	m_textCantPacientesAtend->SetValue(cantPacientes);
}

void ModificarKinesiologosHija::ClickBotonCancelarModKinesiologo( wxCommandEvent& event )  {
	Close();
}

