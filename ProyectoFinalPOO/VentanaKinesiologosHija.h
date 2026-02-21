#ifndef VENTANAKINESIOLOGOSHIJA_H
#define VENTANAKINESIOLOGOSHIJA_H
#include "wxfb_project.h"
#include "Consultorio.h"

class VentanaKinesiologosHija : public VentanaKinesiologosPrincipal1 {
	
private:
	Consultorio *m_consultorio;
protected:
	void OnRegistrarKineClick( wxCommandEvent& event )  override;
	void OnVerKinesClick( wxCommandEvent& event )  override;
	void OnVolverKinesClick( wxCommandEvent& event )  override;
	
public:
	VentanaKinesiologosHija(wxWindow *parent, Consultorio *consultorio);
	~VentanaKinesiologosHija();
};

#endif

