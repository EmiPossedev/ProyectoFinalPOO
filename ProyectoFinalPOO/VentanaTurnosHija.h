#ifndef VENTANATURNOSHIJA_H
#define VENTANATURNOSHIJA_H
#include "wxfb_project.h"

class VentanaTurnosHija : public VentanaTurnosPrincipal {
	
private:
	
protected:
	void OnReservarTurnoClick( wxCommandEvent& event )  override;
	void OnVerAgendaClick( wxCommandEvent& event )  override;
	void OnModificarTurnoClick( wxCommandEvent& event )  override;
	void OnCancelarTurnoClick( wxCommandEvent& event )  override;
	void OnVolverTurnosClick( wxCommandEvent& event )  override;
	
public:
	VentanaTurnosHija(wxWindow *parent=NULL);
	~VentanaTurnosHija();
};

#endif

