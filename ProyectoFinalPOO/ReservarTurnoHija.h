#ifndef RESERVARTURNOHIJA_H
#define RESERVARTURNOHIJA_H
#include "wxfb_project.h"
#include "Consultorio.h"
class ReservarTurnoHija : public ReservarTurnoPrincipal {
	
private:
	Consultorio *m_consultorio; 
protected:
	void OnAceptarReservaClick( wxCommandEvent& event )  override;
	void oncancelarReservaClick( wxCommandEvent& event )  override;
	
public:
	ReservarTurnoHija(wxWindow *parent, Consultorio *consultorio); //el constructor recibe el consultorio
	~ReservarTurnoHija();
};

#endif

