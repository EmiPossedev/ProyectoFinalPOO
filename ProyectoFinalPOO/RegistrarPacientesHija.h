#ifndef REGISTRARPACIENTESHIJA_H
#define REGISTRARPACIENTESHIJA_H
#include "wxfb_project.h"
#include "Consultorio.h"

class RegistrarPacientesHija : public RegistrarPacientesPrincipal {
	
private:
	Consultorio *m_consultorio;
protected:
	void ClickBotonCancelarHija( wxCommandEvent& event )  override;
	void OnAceptarClick( wxCommandEvent& event ) override;
public:
	RegistrarPacientesHija(wxWindow *parent, Consultorio *consultorio);
	~RegistrarPacientesHija();
};

#endif

