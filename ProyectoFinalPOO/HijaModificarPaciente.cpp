#include "HijaModificarPaciente.h"
#include <wx/msgdlg.h>

HijaModificarPaciente::HijaModificarPaciente(wxWindow *parent, Consultorio *consultorio) 
	: ModificarPacientePrincipal(parent), m_consultorio(consultorio) {
	
}

void HijaModificarPaciente::OnCancelarModClick( wxCommandEvent& event )  {
	EndModal(0);
}

void HijaModificarPaciente::OnGuardarModClick( wxCommandEvent& event )  {
	// Me guardo el dni para buscar el paciente
	string dniBuscado = m_txtDni->GetValue().ToStdString();
	
	// Luego lo busco en memoria
	Paciente *p = m_consultorio->buscarPacientePorDni(dniBuscado);
	
	// Veo que el paciente realmente exista antes de modificarlo
	if (p != nullptr) {
		string nuevoNombre = m_txtNombre->GetValue().ToStdString();
		string nuevoApellido = m_txtApellido->GetValue().ToStdString();
		string nuevoTelefono = m_txtTelefono->GetValue().ToStdString();
		string nuevaObra = m_txtObraSocial->GetValue().ToStdString();
		
		// Actualizamos los textos usando los métodos que hicimos
		p->setNombre(nuevoNombre);
		p->setApellido(nuevoApellido);
		p->setTelefono(nuevoTelefono);
		p->setObraSocial(nuevaObra);
		
		int dia = wxAtoi(m_txtDia->GetValue());
		int mes = wxAtoi(m_txtMes->GetValue());
		int anio = wxAtoi(m_txtAnio->GetValue());
		
		// Armo el struct nuevaFecha
		Fecha nuevaFecha;
		nuevaFecha.dia = dia;
		nuevaFecha.mes = mes;
		nuevaFecha.anio = anio;
		p->setFechaDeInicio(nuevaFecha);
		
		// Convierto las sesiones a int
		int asignadas = wxAtoi(m_txtSesionesAsignadas->GetValue());
		int realizadas = wxAtoi(m_txtSesionesRealizadasMod->GetValue());
		p->setCantSesionesTotales(asignadas);
		p->setCantidadSesionesRealizadas(realizadas);
		
		string textoPago = m_txtSesionesPagasMod->GetValue().ToStdString();
		if (textoPago == "Si" || textoPago == "si" || textoPago == "Sí" || textoPago == "sí") {
			p->marcarComoPagado();
		} else {
			p->marcarComoPendiente();
		}
		// Guardo las observaciones
		string nuevasObs = m_txtObservaciones->GetValue().ToStdString();
		p->setObservaciones(nuevasObs);
		
		// Cuando ya modifiqué todo, guardo en el archivo
		m_consultorio->guardarPacientes("pacientes.dat"); 
		
		// Le tiro un mensajito al usuario de que salió todo bien, y salgo
		wxMessageBox("Los datos se modificaron correctamente.", "Exito", wxOK | wxICON_INFORMATION);
		EndModal(1);
		
	} else {
		// Si por alguna razón extraña p == nullptr
		wxMessageBox("Hubo un error al buscar al paciente.", "Error", wxOK | wxICON_ERROR);
	}
}

HijaModificarPaciente::~HijaModificarPaciente() {
	
}

void HijaModificarPaciente::CargarDatos(wxString nombre, wxString apellido, wxString dni, wxString telefono, wxString obraSocial, wxString sesionesPagas, wxString dia, wxString mes, wxString anio, wxString asignadas, wxString realizadas, wxString observaciones) {
	
	m_txtNombre->SetValue(nombre);
	m_txtApellido->SetValue(apellido);
	m_txtDni->SetValue(dni);
	m_txtDni->Disable();
	m_txtTelefono->SetValue(telefono);
	m_txtObraSocial->SetValue(obraSocial);
	m_txtSesionesPagasMod->SetValue(sesionesPagas); 
	
	m_txtDia->SetValue(dia);
	m_txtMes->SetValue(mes);
	m_txtAnio->SetValue(anio);
	
	m_txtSesionesAsignadas->SetValue(asignadas);
	m_txtSesionesRealizadasMod->SetValue(realizadas);
	m_txtObservaciones->SetValue(observaciones);
}
