#ifndef VENTANAAGENDATURNOSHIJA_H
#define VENTANAAGENDATURNOSHIJA_H
#include "wxfb_project.h"
#include "Consultorio.h"

class VentanaAgendaTurnosHija : public VentanaAgendaTurnosPrincipal {
	
private:
	Consultorio *m_consultorio;
protected:
	void ClickBotonCambiarEstado( wxCommandEvent& event )  override;
	void OnVolverClick( wxCommandEvent& event )  override;
	void OnEliminarTurnoClick( wxCommandEvent& event )  override;
	void OnModificarTurnoClick( wxCommandEvent& event )  override;
	void OnAgregarTurnoClick( wxCommandEvent& event )  override;
	
public:
	VentanaAgendaTurnosHija(wxWindow *parent, Consultorio *consultorio);
	~VentanaAgendaTurnosHija();
	
	void RefrescarGrillaTurnos(); 
};

#endif
