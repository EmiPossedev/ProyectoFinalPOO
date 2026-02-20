#ifndef HIJAVERPACIENTES_H
#define HIJAVERPACIENTES_H

#include "wxfb_project.h"
#include "Consultorio.h"

class HijaVerPacientes : public VerPacienteHija {
	Consultorio *m_consultorio;
public:
	HijaVerPacientes(wxWindow *parent, Consultorio *consultorio);
	~HijaVerPacientes();
	void RefrescarGrillaPacientes();
protected:
	//eventos de los botones
	void OnVolverClick( wxCommandEvent& event ) override;
	void OnModificarClick( wxCommandEvent& event ) override;
	void OnEliminarClick( wxCommandEvent& event ) override;
	void OnAgregarClick( wxCommandEvent& event ) override;
	
};

#endif
