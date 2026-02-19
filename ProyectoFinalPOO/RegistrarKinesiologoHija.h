#ifndef REGISTRARKINESIOLOGOHIJA_H
#define REGISTRARKINESIOLOGOHIJA_H
#include "wxfb_project.h"
#include "RegistrarKinesiologoHija.h"
#include "Consultorio.h"
class RegistrarKinesiologoHija : public RegistrarKinesiologoPrincipal {
	
private:
	Consultorio *m_consultorio;
protected:
	void OnCancelarKineClick( wxCommandEvent& event )  override;
	void OnAceptarKineClick( wxCommandEvent& event )  override;
	
public:
	RegistrarKinesiologoHija(wxWindow *parent, Consultorio *consultorio);
	~RegistrarKinesiologoHija();
};

#endif

