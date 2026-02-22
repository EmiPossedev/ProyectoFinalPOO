#ifndef MODIFICARTURNOSHIJA_H
#define MODIFICARTURNOSHIJA_H
#include "wxfb_project.h"
#include "Consultorio.h"

class ModificarTurnosHija : public ModificarTurnosPrincipal {
	
private:
	Consultorio *m_consultorio;
	Turno m_turnoOriginal;
protected:
	void OnCancelarModClick( wxCommandEvent& event )  override;
	void OnGuardarModClick( wxCommandEvent& event )  override;
	
public:
	ModificarTurnosHija(wxWindow *parent, Consultorio *consultorio, Turno turnoOriginal);
	~ModificarTurnosHija();
};

#endif

