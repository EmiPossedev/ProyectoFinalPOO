#ifndef MODIFICARKINESIOLOGOSHIJA_H
#define MODIFICARKINESIOLOGOSHIJA_H
#include "wxfb_project.h"
#include "Consultorio.h"

class ModificarKinesiologosHija : public ModificarKinesiologosPrincipal {
	
private:
	Consultorio *m_consultorio;
protected:
	void ClickBotonAceptarMod( wxCommandEvent& event )  override;
	
public:
	ModificarKinesiologosHija(wxWindow *parent, Consultorio *consultorio);
	void CargarDatos(wxString nombre, wxString apellido, wxString dni, wxString telefono, wxString especialidad, wxString matricula, wxString cantPacientes);
	~ModificarKinesiologosHija();
};

#endif

