#ifndef HIJABUSCARPACIENTE_H
#define HIJABUSCARPACIENTE_H
#include "wxfb_project.h" 
#include "Consultorio.h"

class HijaBuscarPaciente : public BuscarPacienteHija {
	Consultorio *m_consultorio;
public:
	HijaBuscarPaciente(wxWindow *parent, Consultorio *consultorio);
	~HijaBuscarPaciente();
	
protected:
	void OnBuscarPacClick( wxCommandEvent& event ) override;
	
};

#endif
