#include <wx/image.h>
#include "Application.h"
#include "HijaPrincipal.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaPrincipal*win = new HijaPrincipal(NULL);
	win->Show();
	return true;
}

