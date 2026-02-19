#ifndef VERKINESIOLOGOSHIJA_H
#define VERKINESIOLOGOSHIJA_H
#include "wxfb_project.h"
#include "Consultorio.h"

class VerKinesiologosHija : public VerKinesiologosPrincipal {
	
private:
	Consultorio *m_consultorio;
protected:
	void VolverListaKinesiologos( wxCommandEvent& event )  override;
	
public:
	VerKinesiologosHija(wxWindow *parent, Consultorio *consultorio);
	~VerKinesiologosHija();
};

#endif

