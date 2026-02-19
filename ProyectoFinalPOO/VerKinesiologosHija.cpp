#include "VerKinesiologosHija.h"

VerKinesiologosHija::VerKinesiologosHija(wxWindow *parent, Consultorio *consultorio) :
	VerKinesiologosPrincipal(nullptr), m_consultorio(consultorio) 
{
	for(int i = 0 ; i < m_consultorio->getCantKinesiologos() ; i++){
		
	}
}

void VerKinesiologosHija::VolverListaKinesiologos( wxCommandEvent& event )  {
	Close();
}

VerKinesiologosHija::~VerKinesiologosHija() {
	
}


