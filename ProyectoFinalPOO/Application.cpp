#include <wx/image.h>
#include "Application.h"
#include "HijaPrincipal.h"
#include "Consultorio.h"
IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	m_consultorio = new Consultorio("pacientes.dat","kinesiologos.dat","turnos.dat");
	HijaPrincipal*win = new HijaPrincipal(NULL);
	win->Show();
	return true;
}

