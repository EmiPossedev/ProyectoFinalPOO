#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>
#include "Consultorio.h"

class Application : public wxApp {
	Consultorio *m_consultorio;
public:
	virtual bool OnInit();
};

#endif
