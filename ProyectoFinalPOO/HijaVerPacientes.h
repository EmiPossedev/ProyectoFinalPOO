#ifndef HIJAVERPACIENTES_H
#define HIJAVERPACIENTES_H
#include "wxfb_project.h"

class HijaVerPacientes : public VerPacienteHija {
	
private:
	
protected:
	void VolverListaKinesiologos( wxCommandEvent& event )  override;
	void OnVolverClick( wxCommandEvent& event )  override;
	
public:
	HijaVerPacientes(wxWindow *parent=NULL);
	~HijaVerPacientes();
};

#endif

