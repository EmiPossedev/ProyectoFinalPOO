#ifndef HIJAMODIFICARPACIENTE_H
#define HIJAMODIFICARPACIENTE_H
#include "wxfb_project.h"

class HijaModificarPaciente : public ModificarPacientePrincipal {
	
private:
	
protected:
	void OnCancelarModClick( wxCommandEvent& event )  override;
	void OnGuardarModClick( wxCommandEvent& event )  override;
	
public:
	HijaModificarPaciente(wxWindow *parent=NULL);
	~HijaModificarPaciente();
	// Función para ingresar los datos antes de abrir la ventana
	// Ahora recibe TODO:
	void CargarDatos(wxString nombre, wxString apellido, wxString dni, wxString telefono, wxString obraSocial, wxString sesionesPagas, wxString dia, wxString mes, wxString anio, wxString asignadas, wxString realizadas);
};

#endif

