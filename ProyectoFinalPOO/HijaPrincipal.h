#ifndef HIJAPRINCIPAL_H
#define HIJAPRINCIPAL_H
#include "wxfb_project.h"
#include "Consultorio.h"

class HijaPrincipal : public VentanaPrincipal {
	
private:
	
protected:
	Consultorio *m_consultorio;
	void OnKinesiologosClick( wxCommandEvent& event )  override;
	void OnTurnosClick( wxCommandEvent& event )  override;
	void OnPacientesClick( wxCommandEvent& event )  override;
	void ClickBotonSalir( wxCommandEvent& event )  override;
	
public:
	HijaPrincipal(Consultorio *consultorio);
	~HijaPrincipal();
};

#endif

