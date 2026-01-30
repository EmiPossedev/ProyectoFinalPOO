#include <wx/image.h>
#include "Application.h"
#include "HijaPrincipal.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	VentanaPrincipal *win = new VentanaPrincipal(NULL);
	win->Show();
	return true;
}

