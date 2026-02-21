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
	m_botonVolverPacientesPrincipal->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::botonVolverPacientesPrincipal ), NULL, this );
}

VentanaPacientesPrincipal::~VentanaPacientesPrincipal()
{
	// Disconnect Events
	m_button9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnRegistrarClick ), NULL, this );
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::OnVerListaClick ), NULL, this );
	m_botonVolverPacientesPrincipal->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPacientesPrincipal::botonVolverPacientesPrincipal ), NULL, this );

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

	m_txtNombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_txtNombre, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Apellido :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer8->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtApellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_txtApellido, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer8, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Teléfono :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer11->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtTelefono = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_txtTelefono, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("DNI :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer9->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtDni = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_txtDni, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer9, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer65;
	bSizer65 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Obra Social:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	bSizer65->Add( m_staticText36, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtObraSocial = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer65->Add( m_txtObraSocial, 1, wxALL, 5 );


	bSizer6->Add( bSizer65, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Fecha de inicio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer12->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Día"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer12->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtDia = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_txtDia, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Mes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer12->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtMes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_txtMes, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Año"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer12->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtAnio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_txtAnio, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("Cantidad de sesiones asignadas:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	bSizer71->Add( m_staticText31, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtSesionesAsignadas = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer71->Add( m_txtSesionesAsignadas, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer71, 1, wxEXPAND, 5 );

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
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RegistrarPacientesPrincipal::OnAceptarClick ), NULL, this );
}

RegistrarPacientesPrincipal::~RegistrarPacientesPrincipal()
{
	// Disconnect Events
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RegistrarPacientesPrincipal::ClickBotonCancelarHija ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( RegistrarPacientesPrincipal::OnAceptarClick ), NULL, this );

}

VerPacienteHija::VerPacienteHija( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer88;
	bSizer88 = new wxBoxSizer( wxVERTICAL );

	m_grillaPacientes = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grillaPacientes->CreateGrid( 0, 10 );
	m_grillaPacientes->EnableEditing( true );
	m_grillaPacientes->EnableGridLines( true );
	m_grillaPacientes->EnableDragGridSize( false );
	m_grillaPacientes->SetMargins( 0, 0 );

	// Columns
	m_grillaPacientes->SetColSize( 0, 114 );
	m_grillaPacientes->SetColSize( 1, 144 );
	m_grillaPacientes->SetColSize( 2, 80 );
	m_grillaPacientes->SetColSize( 3, 80 );
	m_grillaPacientes->SetColSize( 4, 80 );
	m_grillaPacientes->SetColSize( 5, 106 );
	m_grillaPacientes->SetColSize( 6, 80 );
	m_grillaPacientes->SetColSize( 7, 135 );
	m_grillaPacientes->SetColSize( 8, 125 );
	m_grillaPacientes->SetColSize( 9, 77 );
	m_grillaPacientes->EnableDragColMove( false );
	m_grillaPacientes->EnableDragColSize( true );
	m_grillaPacientes->SetColLabelValue( 0, wxT("Nombre") );
	m_grillaPacientes->SetColLabelValue( 1, wxT("Apellido") );
	m_grillaPacientes->SetColLabelValue( 2, wxT("Tel") );
	m_grillaPacientes->SetColLabelValue( 3, wxT("Dni") );
	m_grillaPacientes->SetColLabelValue( 4, wxT("Inicio") );
	m_grillaPacientes->SetColLabelValue( 5, wxT("Diag") );
	m_grillaPacientes->SetColLabelValue( 6, wxT("Obra Social") );
	m_grillaPacientes->SetColLabelValue( 7, wxT("Ses. Totales/Realizadas") );
	m_grillaPacientes->SetColLabelValue( 8, wxT("Observaciones") );
	m_grillaPacientes->SetColLabelValue( 9, wxT("Ses. Pagas") );
	m_grillaPacientes->SetColLabelValue( 10, wxEmptyString );
	m_grillaPacientes->SetColLabelValue( 11, wxEmptyString );
	m_grillaPacientes->SetColLabelValue( 12, wxEmptyString );
	m_grillaPacientes->SetColLabelValue( 13, wxEmptyString );
	m_grillaPacientes->SetColLabelSize( wxGRID_AUTOSIZE );
	m_grillaPacientes->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grillaPacientes->EnableDragRowSize( true );
	m_grillaPacientes->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grillaPacientes->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer88->Add( m_grillaPacientes, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer63;
	bSizer63 = new wxBoxSizer( wxHORIZONTAL );

	m_botonVolverPac = new wxButton( this, wxID_ANY, wxT("Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( m_botonVolverPac, 0, wxALL, 5 );

	m_btnModificarPac = new wxButton( this, wxID_ANY, wxT("Modificar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( m_btnModificarPac, 0, wxALL, 5 );

	m_btnEliminarPac = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( m_btnEliminarPac, 0, wxALL, 5 );

	m_button31 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( m_button31, 0, wxALL, 5 );


	bSizer88->Add( bSizer63, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer88 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_botonVolverPac->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerPacienteHija::OnVolverClick ), NULL, this );
	m_btnModificarPac->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerPacienteHija::OnModificarClick ), NULL, this );
	m_btnEliminarPac->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerPacienteHija::OnEliminarClick ), NULL, this );
	m_button31->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerPacienteHija::OnAgregarClick ), NULL, this );
}

VerPacienteHija::~VerPacienteHija()
{
	// Disconnect Events
	m_botonVolverPac->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerPacienteHija::OnVolverClick ), NULL, this );
	m_btnModificarPac->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerPacienteHija::OnModificarClick ), NULL, this );
	m_btnEliminarPac->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerPacienteHija::OnEliminarClick ), NULL, this );
	m_button31->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerPacienteHija::OnAgregarClick ), NULL, this );

}

ModificarPacientePrincipal::ModificarPacientePrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Nombre :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer7->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtNombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_txtNombre, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Apellido :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer8->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtApellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_txtApellido, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer8, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Teléfono :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer11->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtTelefono = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_txtTelefono, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("DNI :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer9->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtDni = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer9->Add( m_txtDni, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer9, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer65;
	bSizer65 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Obra Social:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	bSizer65->Add( m_staticText36, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtObraSocial = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer65->Add( m_txtObraSocial, 1, wxALL, 5 );


	bSizer6->Add( bSizer65, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Fecha de inicio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer12->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Día"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer12->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtDia = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_txtDia, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Mes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer12->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtMes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_txtMes, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Año"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer12->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtAnio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_txtAnio, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("Cantidad de sesiones asignadas:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	bSizer71->Add( m_staticText31, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtSesionesAsignadas = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer71->Add( m_txtSesionesAsignadas, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer71, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer711;
	bSizer711 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText311 = new wxStaticText( this, wxID_ANY, wxT("Cantidad de sesiones realizadas:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText311->Wrap( -1 );
	bSizer711->Add( m_staticText311, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtSesionesRealizadasMod = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer711->Add( m_txtSesionesRealizadasMod, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer711, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer7111;
	bSizer7111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3111 = new wxStaticText( this, wxID_ANY, wxT("Sesiones pagas:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3111->Wrap( -1 );
	bSizer7111->Add( m_staticText3111, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_txtSesionesPagasMod = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7111->Add( m_txtSesionesPagasMod, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer7111, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("Observaciones:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	bSizer81->Add( m_staticText53, 0, wxALL, 5 );

	m_txtObservaciones = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	bSizer81->Add( m_txtObservaciones, 1, wxALL, 5 );


	bSizer6->Add( bSizer81, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button10, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_botonGuardarModPaciente = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_botonGuardarModPaciente, 0, wxALL|wxEXPAND, 5 );


	bSizer6->Add( bSizer17, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer6 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarPacientePrincipal::OnCancelarModClick ), NULL, this );
	m_botonGuardarModPaciente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarPacientePrincipal::OnGuardarModClick ), NULL, this );
}

ModificarPacientePrincipal::~ModificarPacientePrincipal()
{
	// Disconnect Events
	m_button10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarPacientePrincipal::OnCancelarModClick ), NULL, this );
	m_botonGuardarModPaciente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarPacientePrincipal::OnGuardarModClick ), NULL, this );

}

BuscarPacienteHija::BuscarPacienteHija( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer381;
	bSizer381 = new wxBoxSizer( wxHORIZONTAL );

	m_txtDniBuscarPac = new wxStaticText( this, wxID_ANY, wxT("Ingrese DNI a buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_txtDniBuscarPac->Wrap( -1 );
	bSizer381->Add( m_txtDniBuscarPac, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textDniABuscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer381->Add( m_textDniABuscar, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_btnBuscarPac = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer381->Add( m_btnBuscarPac, 0, wxALL|wxEXPAND, 5 );


	bSizer37->Add( bSizer381, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	m_txtNombrePac = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_txtNombrePac->Wrap( -1 );
	bSizer59->Add( m_txtNombrePac, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl33 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer59->Add( m_textCtrl33, 1, wxALL, 5 );


	bSizer37->Add( bSizer59, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxHORIZONTAL );

	m_txtApellidoPac = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_txtApellidoPac->Wrap( -1 );
	bSizer60->Add( m_txtApellidoPac, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl34 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer60->Add( m_textCtrl34, 1, wxALL, 5 );


	bSizer37->Add( bSizer60, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxHORIZONTAL );

	m_txtTelefonoPac = new wxStaticText( this, wxID_ANY, wxT("Teléfono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_txtTelefonoPac->Wrap( -1 );
	bSizer61->Add( m_txtTelefonoPac, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl35 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer61->Add( m_textCtrl35, 1, wxALL, 5 );


	bSizer37->Add( bSizer61, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer52;
	bSizer52 = new wxBoxSizer( wxHORIZONTAL );

	m_txtObraSocialPac = new wxStaticText( this, wxID_ANY, wxT("Obra Social:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_txtObraSocialPac->Wrap( -1 );
	bSizer52->Add( m_txtObraSocialPac, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl30 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer52->Add( m_textCtrl30, 1, wxALL, 5 );


	bSizer37->Add( bSizer52, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer521;
	bSizer521 = new wxBoxSizer( wxHORIZONTAL );

	m_txtSesionesPac = new wxStaticText( this, wxID_ANY, wxT("Sesiones Realizadas:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_txtSesionesPac->Wrap( -1 );
	bSizer521->Add( m_txtSesionesPac, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl301 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer521->Add( m_textCtrl301, 1, wxALL, 5 );


	bSizer37->Add( bSizer521, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer37 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_btnBuscarPac->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscarPacienteHija::OnBuscarPacClick ), NULL, this );
}

BuscarPacienteHija::~BuscarPacienteHija()
{
	// Disconnect Events
	m_btnBuscarPac->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscarPacienteHija::OnBuscarPacClick ), NULL, this );

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
	m_buttonVolverKines->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaKinesiologosPrincipal1::OnVolverKinesClick ), NULL, this );
}

VentanaKinesiologosPrincipal1::~VentanaKinesiologosPrincipal1()
{
	// Disconnect Events
	m_buttonRegistrarKine->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaKinesiologosPrincipal1::OnRegistrarKineClick ), NULL, this );
	m_buttonVerKines->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaKinesiologosPrincipal1::OnVerKinesClick ), NULL, this );
	m_buttonVolverKines->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaKinesiologosPrincipal1::OnVolverKinesClick ), NULL, this );

}

RegistrarKinesiologoPrincipal::RegistrarKinesiologoPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer53->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textNombreKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer53->Add( m_textNombreKine, 1, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer37->Add( bSizer53, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer54->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textApellidoKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer54->Add( m_textApellidoKine, 1, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer37->Add( bSizer54, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer55->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textDniKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( m_textDniKine, 1, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer37->Add( bSizer55, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("Teléfono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	bSizer57->Add( m_staticText14, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textTelefonoKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer57->Add( m_textTelefonoKine, 1, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer37->Add( bSizer57, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Especialidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	bSizer58->Add( m_staticText15, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textEspecialidadKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer58->Add( m_textEspecialidadKine, 1, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer37->Add( bSizer58, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Matricula:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer59->Add( m_staticText16, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textMatriculaKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer59->Add( m_textMatriculaKine, 1, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer37->Add( bSizer59, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer38;
	bSizer38 = new wxBoxSizer( wxHORIZONTAL );

	m_buttonCancelarKine = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer38->Add( m_buttonCancelarKine, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_buttonAceptarKine = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer38->Add( m_buttonAceptarKine, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer37->Add( bSizer38, 1, wxALIGN_RIGHT, 5 );


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

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_grillaKinesiologos = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grillaKinesiologos->CreateGrid( 0, 7 );
	m_grillaKinesiologos->EnableEditing( true );
	m_grillaKinesiologos->EnableGridLines( true );
	m_grillaKinesiologos->EnableDragGridSize( false );
	m_grillaKinesiologos->SetMargins( 0, 0 );

	// Columns
	m_grillaKinesiologos->SetColSize( 0, 124 );
	m_grillaKinesiologos->SetColSize( 1, 113 );
	m_grillaKinesiologos->SetColSize( 2, 100 );
	m_grillaKinesiologos->SetColSize( 3, 80 );
	m_grillaKinesiologos->SetColSize( 4, 156 );
	m_grillaKinesiologos->SetColSize( 5, 80 );
	m_grillaKinesiologos->SetColSize( 6, 142 );
	m_grillaKinesiologos->EnableDragColMove( false );
	m_grillaKinesiologos->EnableDragColSize( true );
	m_grillaKinesiologos->SetColLabelValue( 0, wxT("Nombre") );
	m_grillaKinesiologos->SetColLabelValue( 1, wxT("Apellido") );
	m_grillaKinesiologos->SetColLabelValue( 2, wxT("Tel") );
	m_grillaKinesiologos->SetColLabelValue( 3, wxT("Dni") );
	m_grillaKinesiologos->SetColLabelValue( 4, wxT("Especialidad") );
	m_grillaKinesiologos->SetColLabelValue( 5, wxT("Matrícula") );
	m_grillaKinesiologos->SetColLabelValue( 6, wxT("Cant. Pacientes Atend.") );
	m_grillaKinesiologos->SetColLabelValue( 7, wxEmptyString );
	m_grillaKinesiologos->SetColLabelValue( 8, wxEmptyString );
	m_grillaKinesiologos->SetColLabelValue( 9, wxEmptyString );
	m_grillaKinesiologos->SetColLabelValue( 10, wxEmptyString );
	m_grillaKinesiologos->SetColLabelValue( 11, wxEmptyString );
	m_grillaKinesiologos->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grillaKinesiologos->EnableDragRowSize( true );
	m_grillaKinesiologos->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grillaKinesiologos->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer20->Add( m_grillaKinesiologos, 1, wxALL|wxEXPAND, 5 );


	bSizer19->Add( bSizer20, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer63;
	bSizer63 = new wxBoxSizer( wxHORIZONTAL );

	m_botonVolverListaKinesiologos = new wxButton( this, wxID_ANY, wxT("Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( m_botonVolverListaKinesiologos, 0, wxALL, 5 );

	m_botonModificarKinesiologos = new wxButton( this, wxID_ANY, wxT("Modificar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( m_botonModificarKinesiologos, 0, wxALL, 5 );

	m_buttonEliminarListaKinesiologos = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( m_buttonEliminarListaKinesiologos, 0, wxALL, 5 );

	m_buttonAgregarListaKinesiologos = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer63->Add( m_buttonAgregarListaKinesiologos, 0, wxALL, 5 );


	bSizer19->Add( bSizer63, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer19 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_botonVolverListaKinesiologos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerKinesiologosPrincipal::VolverListaKinesiologos ), NULL, this );
	m_botonModificarKinesiologos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerKinesiologosPrincipal::ClickBotonModKinesiologo ), NULL, this );
	m_buttonEliminarListaKinesiologos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerKinesiologosPrincipal::OnEliminarClick ), NULL, this );
	m_buttonAgregarListaKinesiologos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerKinesiologosPrincipal::OnAgregarClick ), NULL, this );
}

VerKinesiologosPrincipal::~VerKinesiologosPrincipal()
{
	// Disconnect Events
	m_botonVolverListaKinesiologos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerKinesiologosPrincipal::VolverListaKinesiologos ), NULL, this );
	m_botonModificarKinesiologos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerKinesiologosPrincipal::ClickBotonModKinesiologo ), NULL, this );
	m_buttonEliminarListaKinesiologos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerKinesiologosPrincipal::OnEliminarClick ), NULL, this );
	m_buttonAgregarListaKinesiologos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VerKinesiologosPrincipal::OnAgregarClick ), NULL, this );

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
	bSizer381->Add( m_staticText35, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textDniABuscar = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer381->Add( m_textDniABuscar, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_buttonEjecutarBusqueda = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer381->Add( m_buttonEjecutarBusqueda, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


	bSizer37->Add( bSizer381, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText37 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText37->Wrap( -1 );
	bSizer59->Add( m_staticText37, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl33 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer59->Add( m_textCtrl33, 1, wxALL, 5 );


	bSizer37->Add( bSizer59, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText39 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	bSizer60->Add( m_staticText39, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl34 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer60->Add( m_textCtrl34, 1, wxALL, 5 );


	bSizer37->Add( bSizer60, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText40 = new wxStaticText( this, wxID_ANY, wxT("Matrícula:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	bSizer61->Add( m_staticText40, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl35 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer61->Add( m_textCtrl35, 1, wxALL, 5 );


	bSizer37->Add( bSizer61, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer52;
	bSizer52 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText34 = new wxStaticText( this, wxID_ANY, wxT("Especialidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	bSizer52->Add( m_staticText34, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl30 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer52->Add( m_textCtrl30, 1, wxALL, 5 );


	bSizer37->Add( bSizer52, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer37 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonEjecutarBusqueda->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscarKinesiologoPrincipal::OnEjecutarBusquedaClick ), NULL, this );
}

BuscarKinesiologoPrincipal::~BuscarKinesiologoPrincipal()
{
	// Disconnect Events
	m_buttonEjecutarBusqueda->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BuscarKinesiologoPrincipal::OnEjecutarBusquedaClick ), NULL, this );

}

VentanaTurnosPrincipal::VentanaTurnosPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	m_buttonReservarTurno = new wxButton( this, wxID_ANY, wxT("Reservar turno"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_buttonReservarTurno, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxVERTICAL );

	m_buttonVerAgenda = new wxButton( this, wxID_ANY, wxT("Ver agenda"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer53->Add( m_buttonVerAgenda, 1, wxALL|wxEXPAND, 5 );


	bSizer13->Add( bSizer53, 1, wxEXPAND, 5 );

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
	m_buttonVolverTurnos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnVolverTurnosClick ), NULL, this );
}

VentanaTurnosPrincipal::~VentanaTurnosPrincipal()
{
	// Disconnect Events
	m_buttonReservarTurno->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnReservarTurnoClick ), NULL, this );
	m_buttonVerAgenda->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaTurnosPrincipal::OnVerAgendaClick ), NULL, this );
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
	bSizer50->Add( m_s, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textNombrePaciente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer50->Add( m_textNombrePaciente, 1, wxALL, 5 );


	bSizer49->Add( bSizer50, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer52;
	bSizer52 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText43 = new wxStaticText( this, wxID_ANY, wxT("Apellido Paciente:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	bSizer52->Add( m_staticText43, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textApellidoPaciente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer52->Add( m_textApellidoPaciente, 1, wxALL, 5 );


	bSizer49->Add( bSizer52, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText44 = new wxStaticText( this, wxID_ANY, wxT("DNI Paciente:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText44->Wrap( -1 );
	bSizer53->Add( m_staticText44, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textDniPaciente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer53->Add( m_textDniPaciente, 1, wxALL, 5 );


	bSizer49->Add( bSizer53, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText45 = new wxStaticText( this, wxID_ANY, wxT("Nombre Kinesiologo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	bSizer54->Add( m_staticText45, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textNombreKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer54->Add( m_textNombreKine, 1, wxALL, 5 );


	bSizer49->Add( bSizer54, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText46 = new wxStaticText( this, wxID_ANY, wxT("Apellido Kinesiologo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	bSizer55->Add( m_staticText46, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textApellidoKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( m_textApellidoKine, 1, wxALL, 5 );


	bSizer49->Add( bSizer55, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText47 = new wxStaticText( this, wxID_ANY, wxT("DNI Kinesiologo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	bSizer56->Add( m_staticText47, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textDniKine = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer56->Add( m_textDniKine, 0, wxALL, 5 );


	bSizer49->Add( bSizer56, 0, wxEXPAND, 5 );

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


	bSizer49->Add( bSizer12, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer65;
	bSizer65 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText61 = new wxStaticText( this, wxID_ANY, wxT("Hora (HH:MM): "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	bSizer65->Add( m_staticText61, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textHora = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer65->Add( m_textHora, 0, wxALL, 5 );


	bSizer49->Add( bSizer65, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText56 = new wxStaticText( this, wxID_ANY, wxT("Instalacion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText56->Wrap( -1 );
	bSizer60->Add( m_staticText56, 0, wxALL, 5 );

	wxString m_choiceInstalacionChoices[] = { wxT("Camilla"), wxT("Gimnasio"), wxT(" Ambos") };
	int m_choiceInstalacionNChoices = sizeof( m_choiceInstalacionChoices ) / sizeof( wxString );
	m_choiceInstalacion = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceInstalacionNChoices, m_choiceInstalacionChoices, 0 );
	m_choiceInstalacion->SetSelection( 0 );
	bSizer60->Add( m_choiceInstalacion, 0, wxALL, 5 );


	bSizer49->Add( bSizer60, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText57 = new wxStaticText( this, wxID_ANY, wxT("Observaciones: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	bSizer61->Add( m_staticText57, 0, wxALL, 5 );

	m_textObservaciones = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 250,80 ), wxTE_MULTILINE );
	bSizer61->Add( m_textObservaciones, 1, wxALL, 5 );


	bSizer49->Add( bSizer61, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxHORIZONTAL );

	m_buttonCancelarReserva = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer62->Add( m_buttonCancelarReserva, 0, wxALL, 5 );

	m_buttonAceptarReserva = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer62->Add( m_buttonAceptarReserva, 0, wxALL, 5 );


	bSizer49->Add( bSizer62, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer49 );
	this->Layout();
	bSizer49->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonCancelarReserva->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservarTurnoPrincipal::oncancelarReservaClick ), NULL, this );
	m_buttonAceptarReserva->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservarTurnoPrincipal::OnAceptarReservaClick ), NULL, this );
}

ReservarTurnoPrincipal::~ReservarTurnoPrincipal()
{
	// Disconnect Events
	m_buttonCancelarReserva->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservarTurnoPrincipal::oncancelarReservaClick ), NULL, this );
	m_buttonAceptarReserva->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReservarTurnoPrincipal::OnAceptarReservaClick ), NULL, this );

}

VentanaAgendaTurnosPrincipal::VentanaAgendaTurnosPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer63;
	bSizer63 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer64;
	bSizer64 = new wxBoxSizer( wxVERTICAL );

	m_grillaTurnos = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grillaTurnos->CreateGrid( 0, 8 );
	m_grillaTurnos->EnableEditing( true );
	m_grillaTurnos->EnableGridLines( true );
	m_grillaTurnos->EnableDragGridSize( false );
	m_grillaTurnos->SetMargins( 0, 0 );

	// Columns
	m_grillaTurnos->SetColSize( 0, 61 );
	m_grillaTurnos->SetColSize( 1, 64 );
	m_grillaTurnos->SetColSize( 2, 104 );
	m_grillaTurnos->SetColSize( 3, 87 );
	m_grillaTurnos->SetColSize( 4, 64 );
	m_grillaTurnos->SetColSize( 5, 79 );
	m_grillaTurnos->SetColSize( 6, 87 );
	m_grillaTurnos->SetColSize( 7, 165 );
	m_grillaTurnos->EnableDragColMove( false );
	m_grillaTurnos->EnableDragColSize( true );
	m_grillaTurnos->SetColLabelValue( 0, wxT("DIA") );
	m_grillaTurnos->SetColLabelValue( 1, wxT("HORA") );
	m_grillaTurnos->SetColLabelValue( 2, wxT("Paciente") );
	m_grillaTurnos->SetColLabelValue( 3, wxT("Kinesiologo") );
	m_grillaTurnos->SetColLabelValue( 4, wxT("Camilla") );
	m_grillaTurnos->SetColLabelValue( 5, wxT("Gimnasio") );
	m_grillaTurnos->SetColLabelValue( 6, wxT("Estado") );
	m_grillaTurnos->SetColLabelValue( 7, wxT("Observaciones") );
	m_grillaTurnos->SetColLabelValue( 8, wxEmptyString );
	m_grillaTurnos->SetColLabelValue( 9, wxEmptyString );
	m_grillaTurnos->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grillaTurnos->EnableDragRowSize( true );
	m_grillaTurnos->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grillaTurnos->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer64->Add( m_grillaTurnos, 1, wxALL|wxEXPAND, 5 );


	bSizer63->Add( bSizer64, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer65;
	bSizer65 = new wxBoxSizer( wxHORIZONTAL );

	m_btnVolver = new wxButton( this, wxID_ANY, wxT("Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer65->Add( m_btnVolver, 0, wxALL, 5 );

	m_btnEliminarTurno = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer65->Add( m_btnEliminarTurno, 0, wxALL, 5 );

	m_btnModificarTurno = new wxButton( this, wxID_ANY, wxT("Modificar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer65->Add( m_btnModificarTurno, 0, wxALL, 5 );

	m_btnAgregarTurno = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer65->Add( m_btnAgregarTurno, 0, wxALL, 5 );


	bSizer63->Add( bSizer65, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer63 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_btnVolver->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAgendaTurnosPrincipal::OnVolverClick ), NULL, this );
	m_btnEliminarTurno->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAgendaTurnosPrincipal::OnEliminarTurnoClick ), NULL, this );
	m_btnModificarTurno->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAgendaTurnosPrincipal::OnModificarTurnoClick ), NULL, this );
	m_btnAgregarTurno->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAgendaTurnosPrincipal::OnAgregarTurnoClick ), NULL, this );
}

VentanaAgendaTurnosPrincipal::~VentanaAgendaTurnosPrincipal()
{
	// Disconnect Events
	m_btnVolver->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAgendaTurnosPrincipal::OnVolverClick ), NULL, this );
	m_btnEliminarTurno->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAgendaTurnosPrincipal::OnEliminarTurnoClick ), NULL, this );
	m_btnModificarTurno->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAgendaTurnosPrincipal::OnModificarTurnoClick ), NULL, this );
	m_btnAgregarTurno->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAgendaTurnosPrincipal::OnAgregarTurnoClick ), NULL, this );

}

ModificarKinesiologosPrincipal::ModificarKinesiologosPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer93;
	bSizer93 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText57 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	bSizer93->Add( m_staticText57, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textNombre = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer93->Add( m_textNombre, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer92->Add( bSizer93, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer94;
	bSizer94 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText58 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText58->Wrap( -1 );
	bSizer94->Add( m_staticText58, 0, wxALL, 5 );

	m_textApellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer94->Add( m_textApellido, 1, wxALL, 5 );


	bSizer92->Add( bSizer94, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText59 = new wxStaticText( this, wxID_ANY, wxT("Telefono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText59->Wrap( -1 );
	bSizer95->Add( m_staticText59, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textTelefono = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer95->Add( m_textTelefono, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer92->Add( bSizer95, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer96;
	bSizer96 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText60 = new wxStaticText( this, wxID_ANY, wxT("Dni:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText60->Wrap( -1 );
	bSizer96->Add( m_staticText60, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textDni = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer96->Add( m_textDni, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer92->Add( bSizer96, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer98;
	bSizer98 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText61 = new wxStaticText( this, wxID_ANY, wxT("Especialidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	bSizer98->Add( m_staticText61, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textEspecialidad = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer98->Add( m_textEspecialidad, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer92->Add( bSizer98, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer99;
	bSizer99 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText62 = new wxStaticText( this, wxID_ANY, wxT("Matricula:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText62->Wrap( -1 );
	bSizer99->Add( m_staticText62, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textMatricula = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer99->Add( m_textMatricula, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer92->Add( bSizer99, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer100;
	bSizer100 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText63 = new wxStaticText( this, wxID_ANY, wxT("Cantidad de Pacientes Atendidos:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText63->Wrap( -1 );
	bSizer100->Add( m_staticText63, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCantPacientesAtend = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer100->Add( m_textCantPacientesAtend, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer92->Add( bSizer100, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxHORIZONTAL );

	m_botonCancelarModPaciente = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_botonCancelarModPaciente, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_botonAceptarModPaciente = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_botonAceptarModPaciente, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


	bSizer92->Add( bSizer101, 1, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer92 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_botonAceptarModPaciente->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarKinesiologosPrincipal::ClickBotonAceptarMod ), NULL, this );
}

ModificarKinesiologosPrincipal::~ModificarKinesiologosPrincipal()
{
	// Disconnect Events
	m_botonAceptarModPaciente->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModificarKinesiologosPrincipal::ClickBotonAceptarMod ), NULL, this );

}
