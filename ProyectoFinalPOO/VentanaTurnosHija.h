#ifndef VENTANATURNOSHIJA_H
#define VENTANATURNOSHIJA_H
#include "wxfb_project.h"
#include "Consultorio.h"

class VentanaTurnosHija : public VentanaTurnosPrincipal {
	
private:
	Consultorio *m_consultorio;
protected:
	void OnReservarTurnoClick( wxCommandEvent& event )  override;
	void OnVerAgendaClick( wxCommandEvent& event )  override;
	void OnVolverTurnosClick( wxCommandEvent& event )  override;
	
public:
	VentanaTurnosHija(wxWindow *parent, Consultorio *consultorio);
	~VentanaTurnosHija();
};

#endif

