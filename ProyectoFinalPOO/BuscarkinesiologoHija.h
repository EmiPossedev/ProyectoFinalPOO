#ifndef BUSCARKINESIOLOGOHIJA_H
#define BUSCARKINESIOLOGOHIJA_H
#include "wxfb_project.h"

class BuscarkinesiologoHija : public BuscarKinesiologoPrincipal {
	
private:
	
protected:
	void OnEjecutarBusquedaClick( wxCommandEvent& event )  override;
	void OnVolverBuscarKineClick( wxCommandEvent& event )  override;
	
public:
	BuscarkinesiologoHija(wxWindow *parent=NULL);
	~BuscarkinesiologoHija();
};

#endif

