#ifndef VENTANAPACIENTESHIJA_H
#define VENTANAPACIENTESHIJA_H
#include "wxfb_project.h"
#include "HijaBuscarPaciente.h" 
class VentanaPacientesHija : public VentanaPacientesPrincipal {
	
private:
	
protected:
	void OnAbrirBusquedaClick( wxCommandEvent& event )  override;
	
public:
	VentanaPacientesHija(wxWindow *parent=NULL);
	~VentanaPacientesHija();
};

#endif

