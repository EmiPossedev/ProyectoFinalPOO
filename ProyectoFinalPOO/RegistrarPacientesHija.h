#ifndef REGISTRARPACIENTESHIJA_H
#define REGISTRARPACIENTESHIJA_H
#include "wxfb_project.h"

class RegistrarPacientesHija : public RegistrarPacientesPrincipal {
	
private:
	
protected:
	void ClickBotonCancelarHija( wxCommandEvent& event )  override;
	
public:
	RegistrarPacientesHija(wxWindow *parent=NULL);
	~RegistrarPacientesHija();
};

#endif

