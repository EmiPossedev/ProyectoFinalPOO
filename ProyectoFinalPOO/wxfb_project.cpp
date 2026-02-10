///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

VentanaPrincipal::VentanaPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_button3 = new wxButton( this, wxID_ANY, wxT("Pacientes"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button3, 1, wxALL|wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_button4 = new wxButton( this, wxID_ANY, wxT("Kinesiologos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button4, 1, wxALL|wxEXPAND, 5 );


	bSizer1->Add( bSizer4, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_button5 = new wxButton( this, wxID_ANY, wxT("Turnos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button5, 1, wxALL|wxEXPAND, 5 );


	bSizer1->Add( bSizer5, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_button6 = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_button6, 0, wxALL, 5 );

	m_botonSalirPrincipal = new wxButton( this, wxID_ANY, wxT("Salir"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_botonSalirPrincipal, 0, wxALL, 5 );


	bSizer1->Add( bSizer6, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::OnPacientesClick ), NULL, this );
	m_botonSalirPrincipal->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::ClickBotonSalir ), NULL, this );
}

VentanaPrincipal::~VentanaPrincipal()
{
	// Disconnect Events
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::OnPacientesClick ), NULL, this );
	m_botonSalirPrincipal->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::ClickBotonSalir ), NULL, this );

}

VentanaPacientesPrincipal::VentanaPacientesPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_button9 = new wxButton( this, wxID_ANY, wxT("Registrar paciente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_button9, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Ver pacientes"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button10, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	m_button11 = new wxButton( this, wxID_ANY, wxT("Buscar paciente por DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_button11, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer16, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );

	m_button12 = new wxButton( this, wxID_ANY, wxT("⬅️ Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button12, 0, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer17, 0, 0, 5 );


	this->SetSizer( bSizer13 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnRegistrarClick ), NULL, this );
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnVerListaClick ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnAbrirBusquedaClick ), NULL, this );
}

VentanaPacientesPrincipal::~VentanaPacientesPrincipal()
{
	// Disconnect Events
	m_button9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnRegistrarClick ), NULL, this );
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnVerListaClick ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnAbrirBusquedaClick ), NULL, this );

}

VerPacienteHija::VerPacienteHija( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );

	m_listaPacientes = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizer19->Add( m_listaPacientes, 0, wxALL, 5 );

	m_buttonVolver = new wxButton( this, wxID_ANY, wxT("Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_buttonVolver, 0, wxALL, 5 );


	this->SetSizer( bSizer19 );
	this->Layout();
	bSizer19->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonVolver->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerPacienteHija::OnVolverClick ), NULL, this );
}

VerPacienteHija::~VerPacienteHija()
{
	// Disconnect Events
	m_buttonVolver->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerPacienteHija::OnVolverClick ), NULL, this );

}

BuscarPacienteHija::BuscarPacienteHija( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxVERTICAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Ingrese DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer18->Add( m_staticText9, 0, wxALL, 5 );

	m_txtDniBuscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( m_txtDniBuscar, 0, wxALL, 5 );

	m_buttonBuscarAccion = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( m_buttonBuscarAccion, 0, wxALL, 5 );

	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer18->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );

	m_lblResultado = new wxStaticText( this, wxID_ANY, wxT("Esperando búsqueda..."), wxDefaultPosition, wxDefaultSize, 0 );
	m_lblResultado->Wrap( -1 );
	m_lblResultado->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer18->Add( m_lblResultado, 0, wxALL, 5 );


	this->SetSizer( bSizer18 );
	this->Layout();
	bSizer18->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonBuscarAccion->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscarPacienteHija::OnBuscarClick ), NULL, this );
}

BuscarPacienteHija::~BuscarPacienteHija()
{
	// Disconnect Events
	m_buttonBuscarAccion->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscarPacienteHija::OnBuscarClick ), NULL, this );

}

RegistrarPacientesPrincipal::RegistrarPacientesPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Nombre :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer7->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_textCtrl2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Apellido :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer8->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl3 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_textCtrl3, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer8, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Teléfono :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer11->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl6 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_textCtrl6, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("DNI :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer9->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl4 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_textCtrl4, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer9, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Fecha de inicio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer12->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Día"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer12->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl7 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_textCtrl7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Mes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer12->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl8 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_textCtrl8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Año"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer12->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl9 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_textCtrl9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button11 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button11, 0, wxALL, 5 );


	bSizer6->Add( bSizer17, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer6 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RegistrarPacientesPrincipal::ClickBotonCancelarHija ), NULL, this );
}

RegistrarPacientesPrincipal::~RegistrarPacientesPrincipal()
{
	// Disconnect Events
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RegistrarPacientesPrincipal::ClickBotonCancelarHija ), NULL, this );

}
