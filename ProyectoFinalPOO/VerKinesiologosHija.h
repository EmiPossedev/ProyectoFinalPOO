#ifndef VERKINESIOLOGOSHIJA_H
#define VERKINESIOLOGOSHIJA_H
#include "wxfb_project.h"
#include "Consultorio.h"

class VerKinesiologosHija : public VerKinesiologosPrincipal {
	
private:
	Consultorio *m_consultorio;
protected:
	void OnAgregarClick( wxCommandEvent& event )  override;
	void OnEliminarClick( wxCommandEvent& event )  override;
	void VolverListaKinesiologos( wxCommandEvent& event )  override;
	
public:
	VerKinesiologosHija(wxWindow *parent, Consultorio *consultorio);
	~VerKinesiologosHija();
	void RefrescarGrillaKinesiologos();
};

#endif

