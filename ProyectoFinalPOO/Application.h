#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>
#include "Consultorio.h"

class Application : public wxApp {
	
public:
	Consultorio *m_consultorio; //Para que las ventanas puedan usarlo
	virtual bool OnInit();
};
//permite que 
DECLARE_APP(Application)
#endif
