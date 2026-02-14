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
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::OnKinesiologosClick ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::OnTurnosClick ), NULL, this );
	m_botonSalirPrincipal->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::ClickBotonSalir ), NULL, this );
}

VentanaPrincipal::~VentanaPrincipal()
{
	// Disconnect Events
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::OnPacientesClick ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::OnKinesiologosClick ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::OnTurnosClick ), NULL, this );
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

	m_botonVolverPacientesPrincipal = new wxButton( this, wxID_ANY, wxT("⬅️ Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_botonVolverPacientesPrincipal, 0, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer17, 0, 0, 5 );


	this->SetSizer( bSizer13 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnRegistrarClick ), NULL, this );
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnVerListaClick ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnAbrirBusquedaClick ), NULL, this );
	m_botonVolverPacientesPrincipal->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::botonVolverPacientesPrincipal ), NULL, this );
}

VentanaPacientesPrincipal::~VentanaPacientesPrincipal()
{
	// Disconnect Events
	m_button9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnRegistrarClick ), NULL, this );
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnVerListaClick ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnAbrirBusquedaClick ), NULL, this );
	m_botonVolverPacientesPrincipal->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::botonVolverPacientesPrincipal ), NULL, this );

}

VerPacienteHija::VerPacienteHija( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );

	m_listaPacientes = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizer19->Add( m_listaPacientes, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );

	m_buttonVolver = new wxButton( this, wxID_ANY, wxT("Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_buttonVolver, 0, wxALL, 5 );


	bSizer19->Add( bSizer20, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer19 );
	this->Layout();

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

VentanaKinesiologosPrincipal1::VentanaKinesiologosPrincipal1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_buttonRegistrarKine = new wxButton( this, wxID_ANY, wxT("Registrar Kinesiologo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_buttonRegistrarKine, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	m_buttonVerKines = new wxButton( this, wxID_ANY, wxT("Ver Kinesiologos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_buttonVerKines, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	m_buttonBuscarKine = new wxButton( this, wxID_ANY, wxT("Buscar Kinesiologo por DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_buttonBuscarKine, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer16, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );

	m_buttonVolverKines = new wxButton( this, wxID_ANY, wxT("⬅️ Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_buttonVolverKines, 0, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer17, 0, 0, 5 );


	this->SetSizer( bSizer13 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonRegistrarKine->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaKinesiologosPrincipal1::OnRegistrarKineClick ), NULL, this );
	m_buttonVerKines->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaKinesiologosPrincipal1::OnVerKinesClick ), NULL, this );
	m_buttonBuscarKine->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaKinesiologosPrincipal1::OnBuscarKineClick ), NULL, this );
	m_buttonVolverKines->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaKinesiologosPrincipal1::OnVolverKinesClick ), NULL, this );
}

VentanaKinesiologosPrincipal1::~VentanaKinesiologosPrincipal1()
{
	// Disconnect Events
	m_buttonRegistrarKine->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaKinesiologosPrincipal1::OnRegistrarKineClick ), NULL, this );
	m_buttonVerKines->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaKinesiologosPrincipal1::OnVerKinesClick ), NULL, this );
	m_buttonBuscarKine->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaKinesiologosPrincipal1::OnBuscarKineClick ), NULL, this );
	m_buttonVolverKines->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaKinesiologosPrincipal1::OnVolverKinesClick ), NULL, this );

}

RegistrarKinesiologoPrincipal::RegistrarKinesiologoPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxVERTICAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer37->Add( m_staticText11, 0, wxALL, 5 );

	m_textNombrekine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_textNombrekine, 0, wxEXPAND, 5 );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer37->Add( m_staticText12, 0, wxALL, 5 );

	m_textApellidoKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_textApellidoKine, 0, wxEXPAND, 5 );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer37->Add( m_staticText13, 0, wxALL, 5 );

	m_textDniKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_textDniKine, 0, wxEXPAND, 5 );

	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("Teléfono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	bSizer37->Add( m_staticText14, 0, wxALL, 5 );

	m_textTelefonoKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_textTelefonoKine, 0, wxEXPAND, 5 );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Especialidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	bSizer37->Add( m_staticText15, 0, wxALL, 5 );

	m_textEspecialidadKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_textEspecialidadKine, 0, wxEXPAND, 5 );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Matricula:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer37->Add( m_staticText16, 0, wxALL, 5 );

	m_textMatriculaKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_textMatriculaKine, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer38;
	bSizer38 = new wxBoxSizer( wxHORIZONTAL );

	m_buttonCancelarKine = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer38->Add( m_buttonCancelarKine, 0, wxALL, 5 );

	m_buttonAceptarKine = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer38->Add( m_buttonAceptarKine, 0, wxALL, 5 );


	bSizer37->Add( bSizer38, 1, 0, 5 );


	this->SetSizer( bSizer37 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonCancelarKine->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RegistrarKinesiologoPrincipal::OnCancelarKineClick ), NULL, this );
	m_buttonAceptarKine->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RegistrarKinesiologoPrincipal::OnAceptarKineClick ), NULL, this );
}

RegistrarKinesiologoPrincipal::~RegistrarKinesiologoPrincipal()
{
	// Disconnect Events
	m_buttonCancelarKine->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RegistrarKinesiologoPrincipal::OnCancelarKineClick ), NULL, this );
	m_buttonAceptarKine->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RegistrarKinesiologoPrincipal::OnAceptarKineClick ), NULL, this );

}

VerKinesiologosPrincipal::VerKinesiologosPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );

	m_listaKines = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	bSizer19->Add( m_listaKines, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );

	m_buttonVolverListaKines = new wxButton( this, wxID_ANY, wxT("Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_buttonVolverListaKines, 0, wxALL, 5 );


	bSizer19->Add( bSizer20, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer19 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonVolverListaKines->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerKinesiologosPrincipal::OnVolverListaKinesClick ), NULL, this );
}

VerKinesiologosPrincipal::~VerKinesiologosPrincipal()
{
	// Disconnect Events
	m_buttonVolverListaKines->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerKinesiologosPrincipal::OnVolverListaKinesClick ), NULL, this );

}

BuscarKinesiologoPrincipal::BuscarKinesiologoPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer381;
	bSizer381 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Ingrese DNI a buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	bSizer381->Add( m_staticText35, 0, wxALL, 5 );

	m_textDniABuscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer381->Add( m_textDniABuscar, 0, wxALL, 5 );

	m_buttonEjecutarBusqueda = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer381->Add( m_buttonEjecutarBusqueda, 0, wxALL, 5 );


	bSizer37->Add( bSizer381, 1, wxEXPAND, 5 );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer37->Add( m_staticText11, 0, wxALL, 5 );

	m_textNombrekine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer37->Add( m_textNombrekine, 0, wxEXPAND, 5 );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer37->Add( m_staticText12, 0, wxALL, 5 );

	m_textApellidoKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer37->Add( m_textApellidoKine, 0, wxEXPAND, 5 );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer37->Add( m_staticText13, 0, wxALL, 5 );

	m_textDniKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer37->Add( m_textDniKine, 0, wxEXPAND, 5 );

	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("Teléfono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	bSizer37->Add( m_staticText14, 0, wxALL, 5 );

	m_textTelefonoKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer37->Add( m_textTelefonoKine, 0, wxEXPAND, 5 );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Especialidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	bSizer37->Add( m_staticText15, 0, wxALL, 5 );

	m_textEspecialidadKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer37->Add( m_textEspecialidadKine, 0, wxEXPAND, 5 );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Matricula:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer37->Add( m_staticText16, 0, wxALL, 5 );

	m_textMatriculaKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer37->Add( m_textMatriculaKine, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer38;
	bSizer38 = new wxBoxSizer( wxHORIZONTAL );

	m_buttonVolverBuscarKineClick = new wxButton( this, wxID_ANY, wxT("Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer38->Add( m_buttonVolverBuscarKineClick, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer37->Add( bSizer38, 1, 0, 5 );


	this->SetSizer( bSizer37 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonEjecutarBusqueda->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscarKinesiologoPrincipal::OnEjecutarBusquedaClick ), NULL, this );
	m_buttonVolverBuscarKineClick->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscarKinesiologoPrincipal::OnVolverBuscarKineClick ), NULL, this );
}

BuscarKinesiologoPrincipal::~BuscarKinesiologoPrincipal()
{
	// Disconnect Events
	m_buttonEjecutarBusqueda->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscarKinesiologoPrincipal::OnEjecutarBusquedaClick ), NULL, this );
	m_buttonVolverBuscarKineClick->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscarKinesiologoPrincipal::OnVolverBuscarKineClick ), NULL, this );

}

VentanaTurnosPrincipal::VentanaTurnosPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_buttonReservarTurno = new wxButton( this, wxID_ANY, wxT("Reservar nuevo turno"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_buttonReservarTurno, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	m_buttonVerAgenda = new wxButton( this, wxID_ANY, wxT("Ver agenda"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_buttonVerAgenda, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer15, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	m_buttonModificarTurno = new wxButton( this, wxID_ANY, wxT("Modificar turno"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_buttonModificarTurno, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer16, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer161;
	bSizer161 = new wxBoxSizer( wxVERTICAL );

	m_buttonCancelarTurno = new wxButton( this, wxID_ANY, wxT("Cancelar turno"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer161->Add( m_buttonCancelarTurno, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer161, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );

	m_buttonVolverTurnos = new wxButton( this, wxID_ANY, wxT("⬅️ Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_buttonVolverTurnos, 0, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer17, 0, 0, 5 );


	this->SetSizer( bSizer13 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonReservarTurno->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnReservarTurnoClick ), NULL, this );
	m_buttonVerAgenda->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnVerAgendaClick ), NULL, this );
	m_buttonModificarTurno->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnModificarTurnoClick ), NULL, this );
	m_buttonCancelarTurno->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnCancelarTurnoClick ), NULL, this );
	m_buttonVolverTurnos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnVolverTurnosClick ), NULL, this );
}

VentanaTurnosPrincipal::~VentanaTurnosPrincipal()
{
	// Disconnect Events
	m_buttonReservarTurno->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnReservarTurnoClick ), NULL, this );
	m_buttonVerAgenda->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnVerAgendaClick ), NULL, this );
	m_buttonModificarTurno->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnModificarTurnoClick ), NULL, this );
	m_buttonCancelarTurno->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnCancelarTurnoClick ), NULL, this );
	m_buttonVolverTurnos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnVolverTurnosClick ), NULL, this );

}

ReservarTurnoPrincipal::ReservarTurnoPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxHORIZONTAL );

	m_s = new wxStaticText( this, wxID_ANY, wxT("Nombre Paciente:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_s->Wrap( -1 );
	bSizer50->Add( m_s, 0, wxALL, 5 );

	m_textNombrePaciente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer50->Add( m_textNombrePaciente, 0, wxALL, 5 );


	bSizer49->Add( bSizer50, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer52;
	bSizer52 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText43 = new wxStaticText( this, wxID_ANY, wxT("Apellido Paciente:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	bSizer52->Add( m_staticText43, 0, wxALL, 5 );

	m_textApellidoPaciente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer52->Add( m_textApellidoPaciente, 0, wxALL, 5 );


	bSizer49->Add( bSizer52, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText44 = new wxStaticText( this, wxID_ANY, wxT("DNI Paciente:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText44->Wrap( -1 );
	bSizer53->Add( m_staticText44, 0, wxALL, 5 );

	m_textDniPaciente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer53->Add( m_textDniPaciente, 0, wxALL, 5 );


	bSizer49->Add( bSizer53, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText45 = new wxStaticText( this, wxID_ANY, wxT("Nombre Kinesiologo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	bSizer54->Add( m_staticText45, 0, wxALL, 5 );

	m_textNombreKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer54->Add( m_textNombreKine, 0, wxALL, 5 );


	bSizer49->Add( bSizer54, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText46 = new wxStaticText( this, wxID_ANY, wxT("Apellido Kinesiologo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	bSizer55->Add( m_staticText46, 0, wxALL, 5 );

	m_textApellidoKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( m_textApellidoKine, 0, wxALL, 5 );


	bSizer49->Add( bSizer55, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText47 = new wxStaticText( this, wxID_ANY, wxT("DNI Kinesiologo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	bSizer56->Add( m_staticText47, 0, wxALL, 5 );

	m_textDniKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer56->Add( m_textDniKine, 0, wxALL, 5 );


	bSizer49->Add( bSizer56, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Fecha consulta:"), wxDefaultPosition, wxDefaultSize, 0 );
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


	bSizer49->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer65;
	bSizer65 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText61 = new wxStaticText( this, wxID_ANY, wxT("Hora (HH:MM): "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	bSizer65->Add( m_staticText61, 0, wxALL, 5 );

	m_textHora = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer65->Add( m_textHora, 0, wxALL, 5 );


	bSizer49->Add( bSizer65, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText56 = new wxStaticText( this, wxID_ANY, wxT("Instalacion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText56->Wrap( -1 );
	bSizer60->Add( m_staticText56, 0, wxALL, 5 );

	wxString m_choiceInstalacionChoices[] = { wxT("Camilla"), wxT("Gimnasio") };
	int m_choiceInstalacionNChoices = sizeof( m_choiceInstalacionChoices ) / sizeof( wxString );
	m_choiceInstalacion = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceInstalacionNChoices, m_choiceInstalacionChoices, 0 );
	m_choiceInstalacion->SetSelection( 0 );
	bSizer60->Add( m_choiceInstalacion, 0, wxALL, 5 );


	bSizer49->Add( bSizer60, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText57 = new wxStaticText( this, wxID_ANY, wxT("Observaciones: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	bSizer61->Add( m_staticText57, 0, wxALL, 5 );

	m_textObservaciones = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 250,80 ), wxTE_MULTILINE );
	bSizer61->Add( m_textObservaciones, 0, wxALL, 5 );


	bSizer49->Add( bSizer61, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxHORIZONTAL );

	m_buttonAceptarReserva = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer62->Add( m_buttonAceptarReserva, 0, wxALL, 5 );

	m_buttonCancelarReserva = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer62->Add( m_buttonCancelarReserva, 0, wxALL, 5 );


	bSizer49->Add( bSizer62, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer49 );
	this->Layout();
	bSizer49->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonAceptarReserva->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservarTurnoPrincipal::OnAceptarReservaClick ), NULL, this );
	m_buttonCancelarReserva->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservarTurnoPrincipal::oncancelarReservaClick ), NULL, this );
}

ReservarTurnoPrincipal::~ReservarTurnoPrincipal()
{
	// Disconnect Events
	m_buttonAceptarReserva->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservarTurnoPrincipal::OnAceptarReservaClick ), NULL, this );
	m_buttonCancelarReserva->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservarTurnoPrincipal::oncancelarReservaClick ), NULL, this );

}
