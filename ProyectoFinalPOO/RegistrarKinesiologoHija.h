#ifndef REGISTRARKINESIOLOGOHIJA_H
#define REGISTRARKINESIOLOGOHIJA_H
#include "wxfb_project.h"
#include "RegistrarKinesiologoHija.h"
class RegistrarKinesiologoHija : public RegistrarKinesiologoPrincipal {
	
private:
	
protected:
	void OnCancelarKineClick( wxCommandEvent& event )  override;
	void OnAceptarKineClick( wxCommandEvent& event )  override;
	
public:
	RegistrarKinesiologoHija(wxWindow *parent=NULL);
	~RegistrarKinesiologoHija();
};

#endif

