#ifndef BUSCARKINESIOLOGOHIJA_H
#define BUSCARKINESIOLOGOHIJA_H
#include "wxfb_project.h"
#include "Consultorio.h"

class BuscarkinesiologoHija : public BuscarKinesiologoPrincipal {
	
private:
	Consultorio *m_consultorio;
protected:
	void OnEjecutarBusquedaClick( wxCommandEvent& event )  override;
	
public:
	BuscarkinesiologoHija(wxWindow *parent, Consultorio *consultorio);
	~BuscarkinesiologoHija();
};

#endif

