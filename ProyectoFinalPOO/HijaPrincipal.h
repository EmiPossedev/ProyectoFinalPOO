#ifndef HIJAPRINCIPAL_H
#define HIJAPRINCIPAL_H
#include "wxfb_project.h"

class HijaPrincipal : public VentanaPrincipal {
	
private:
	
protected:
	void ClickBotonSalir( wxCommandEvent& event )  override;
	
public:
	HijaPrincipal(wxWindow *parent=NULL);
	~HijaPrincipal();
};

#endif

