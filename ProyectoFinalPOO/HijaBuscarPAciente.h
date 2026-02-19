#ifndef HIJABUSCARPACIENTE_H
#define HIJABUSCARPACIENTE_H

#include "wxfb_project.h" 

class HijaBuscarPaciente : public BuscarPacienteHija {
	
public:
	HijaBuscarPaciente(wxWindow *parent=NULL);
	~HijaBuscarPaciente();
	
protected:
	void OnBuscarPacClick( wxCommandEvent& event ) override;
	
};

#endif
