#ifndef HIJABUSCARPACIENTE_H
#define HIJABUSCARPACIENTE_H
#include "wxfb_project.h" 

class HijaBuscarPaciente : public BuscarPacienteHija {
	
public:
	
	HijaBuscarPaciente(wxWindow *parent=NULL);
	
protected:
	
	void OnBuscarClick( wxCommandEvent& event ) override;
};
#endif
