#ifndef RESERVARTURNOHIJA_H
#define RESERVARTURNOHIJA_H
#include "wxfb_project.h"

class ReservarTurnoHija : public ReservarTurnoPrincipal {
	
private:
	
protected:
	void OnAceptarReservaClick( wxCommandEvent& event )  override;
	void oncancelarReservaClick( wxCommandEvent& event )  override;
	
public:
	ReservarTurnoHija(wxWindow *parent=NULL);
	~ReservarTurnoHija();
};

#endif

