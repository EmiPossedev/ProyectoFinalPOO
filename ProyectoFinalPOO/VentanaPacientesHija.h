#ifndef VENTANAPACIENTESHIJA_H
#define VENTANAPACIENTESHIJA_H
#include "wxfb_project.h"
#include "HijaBuscarPaciente.h" 
class VentanaPacientesHija : public VentanaPacientesPrincipal {
	
private:
	
protected:
	void botonVolverPacientesPrincipal( wxCommandEvent& event )  override;
	void OnRegistrarClick( wxCommandEvent& event )  override;
	void OnAbrirBusquedaClick( wxCommandEvent& event )  override;
	void OnVerListaClick( wxCommandEvent& event ) override;
	
public:
	VentanaPacientesHija(wxWindow *parent=NULL);
	~VentanaPacientesHija();
};

#endif

