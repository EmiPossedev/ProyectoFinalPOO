#ifndef VERKINESIOLOGOSHIJA_H
#define VERKINESIOLOGOSHIJA_H
#include "wxfb_project.h"

class VerKinesiologosHija : public VerKinesiologosPrincipal {
	
private:
	
protected:
	void OnVolverListaKinesClick( wxCommandEvent& event )  override;
	
public:
	VerKinesiologosHija(wxWindow *parent=NULL);
	~VerKinesiologosHija();
};

#endif

