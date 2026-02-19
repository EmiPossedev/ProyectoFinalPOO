#ifndef HIJAVERPACIENTES_H
#define HIJAVERPACIENTES_H

#include "wxfb_project.h"

class HijaVerPacientes : public VerPacienteHija {
	
public:
	HijaVerPacientes(wxWindow *parent=NULL);
	~HijaVerPacientes();
	
protected:
	//eventos de los botones
	void OnVolverClick( wxCommandEvent& event ) override;
	void OnModificarClick( wxCommandEvent& event ) override;
	void OnEliminarClick( wxCommandEvent& event ) override;
	void OnAgregarClick( wxCommandEvent& event ) override;
	
};

#endif
