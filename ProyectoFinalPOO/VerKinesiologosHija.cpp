#include "VerKinesiologosHija.h"

VerKinesiologosHija::VerKinesiologosHija(wxWindow *parent) : VerKinesiologosPrincipal(parent) {
	
}

void VerKinesiologosHija::OnVolverListaKinesClick( wxCommandEvent& event )  {
	Close();
}

VerKinesiologosHija::~VerKinesiologosHija() {
	
}

