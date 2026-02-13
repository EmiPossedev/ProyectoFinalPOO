#ifndef VENTANAKINESIOLOGOSHIJA_H
#define VENTANAKINESIOLOGOSHIJA_H
#include "wxfb_project.h"

class VentanaKinesiologosHija : public VentanaKinesiologosPrincipal1 {
	
private:
	
protected:
	void OnRegistrarKineClick( wxCommandEvent& event )  override;
	void OnVerKinesClick( wxCommandEvent& event )  override;
	void OnBuscarKineClick( wxCommandEvent& event )  override;
	void OnVolverKinesClick( wxCommandEvent& event )  override;
	
public:
	VentanaKinesiologosHija(wxWindow *parent=NULL);
	~VentanaKinesiologosHija();
};

#endif

