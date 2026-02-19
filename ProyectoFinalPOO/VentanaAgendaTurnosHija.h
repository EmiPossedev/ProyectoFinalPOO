#ifndef VENTANAAGENDATURNOSHIJA_H
#define VENTANAAGENDATURNOSHIJA_H
#include "wxfb_project.h"
#include "Consultorio.h"

class VentanaAgendaTurnosHija : public VentanaAgendaTurnosPrincipal {
	
private:
	Consultorio *m_consultorio;
protected:
	
public:
	VentanaAgendaTurnosHija(wxWindow *parent, Consultorio *consultorio);
	~VentanaAgendaTurnosHija();
};

#endif

