#ifndef HIJAPRINCIPAL_H
#define HIJAPRINCIPAL_H
#include "wxfb_project.h"

class HijaPrincipal : public VentanaPrincipal {
	
private:
	
protected:
	void OnPacientesClick( wxCommandEvent& event )  override;
	void ClickBotonSalir( wxCommandEvent& event )  override;
	void OnKinesiologosClick( wxCommandEvent& event );
public:
	HijaPrincipal(wxWindow *parent=NULL);
	~HijaPrincipal();
};

#endif

