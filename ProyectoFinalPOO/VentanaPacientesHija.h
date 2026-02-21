#ifndef VENTANAPACIENTESHIJA_H
#define VENTANAPACIENTESHIJA_H
#include "wxfb_project.h"
#include "HijaBuscarPaciente.h" 
#include "Consultorio.h"
class VentanaPacientesHija : public VentanaPacientesPrincipal {
	
private:
	Consultorio *m_consultorio;
protected:
	void botonVolverPacientesPrincipal( wxCommandEvent& event )  override;
	void OnRegistrarClick( wxCommandEvent& event )  override;
	void OnVerListaClick( wxCommandEvent& event ) override;
	
public:
	VentanaPacientesHija(wxWindow *parent, Consultorio *consultorio);
	~VentanaPacientesHija();
};

#endif

