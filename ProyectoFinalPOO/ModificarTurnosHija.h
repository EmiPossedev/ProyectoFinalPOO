#ifndef MODIFICARTURNOSHIJA_H
#define MODIFICARTURNOSHIJA_H
#include "wxfb_project.h"
#include "Consultorio.h"

class ModificarTurnosHija : public ModificarTurnosPrincipal {
	
private:
	Consultorio *m_consultorio;
protected:
	
public:
	ModificarTurnosHija(wxWindow *parent, Consultorio *consultorio);
	~ModificarTurnosHija();
};

#endif

