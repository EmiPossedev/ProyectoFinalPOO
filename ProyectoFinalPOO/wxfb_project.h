///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/button.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/grid.h>
#include <wx/choice.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaPrincipal
///////////////////////////////////////////////////////////////////////////////
class VentanaPrincipal : public wxFrame
{
	private:

	protected:
		wxButton* m_button3;
		wxButton* m_button4;
		wxButton* m_button5;
		wxButton* m_button6;
		wxButton* m_botonSalirPrincipal;

		// Virtual event handlers, override them in your derived class
		virtual void OnPacientesClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnKinesiologosClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTurnosClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonSalir( wxCommandEvent& event ) { event.Skip(); }


	public:

		VentanaPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~VentanaPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaPacientesPrincipal
///////////////////////////////////////////////////////////////////////////////
class VentanaPacientesPrincipal : public wxDialog
{
	private:

	protected:
		wxButton* m_button9;
		wxButton* m_button10;
		wxButton* m_botonVolverPacientesPrincipal;

		// Virtual event handlers, override them in your derived class
		virtual void OnRegistrarClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnVerListaClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void botonVolverPacientesPrincipal( wxCommandEvent& event ) { event.Skip(); }


	public:

		VentanaPacientesPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 482,245 ), long style = wxDEFAULT_DIALOG_STYLE );

		~VentanaPacientesPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class RegistrarPacientesPrincipal
///////////////////////////////////////////////////////////////////////////////
class RegistrarPacientesPrincipal : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* m_txtNombre;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_txtApellido;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_txtTelefono;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_txtDni;
		wxStaticText* m_staticText36;
		wxTextCtrl* m_txtObraSocial;
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_txtDia;
		wxStaticText* m_staticText10;
		wxTextCtrl* m_txtMes;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_txtAnio;
		wxStaticText* m_staticText31;
		wxTextCtrl* m_txtSesionesAsignadas;
		wxButton* m_button10;
		wxButton* m_button11;

		// Virtual event handlers, override them in your derived class
		virtual void ClickBotonCancelarHija( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAceptarClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		RegistrarPacientesPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 520,372 ), long style = wxDEFAULT_DIALOG_STYLE );

		~RegistrarPacientesPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class VerPacienteHija
///////////////////////////////////////////////////////////////////////////////
class VerPacienteHija : public wxDialog
{
	private:

	protected:
		wxGrid* m_grillaPacientes;
		wxButton* m_botonVolverPac;
		wxButton* m_btnModificarPac;
		wxButton* m_btnEliminarPac;
		wxButton* m_button31;

		// Virtual event handlers, override them in your derived class
		virtual void OnVolverClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnModificarClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEliminarClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAgregarClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		VerPacienteHija( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Lista Completa de Pacientes"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1025,450 ), long style = wxDEFAULT_DIALOG_STYLE );

		~VerPacienteHija();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ModificarPacientePrincipal
///////////////////////////////////////////////////////////////////////////////
class ModificarPacientePrincipal : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* m_txtNombre;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_txtApellido;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_txtTelefono;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_txtDni;
		wxStaticText* m_staticText36;
		wxTextCtrl* m_txtObraSocial;
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_txtDia;
		wxStaticText* m_staticText10;
		wxTextCtrl* m_txtMes;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_txtAnio;
		wxStaticText* m_staticText31;
		wxTextCtrl* m_txtSesionesAsignadas;
		wxStaticText* m_staticText311;
		wxTextCtrl* m_txtSesionesRealizadasMod;
		wxStaticText* m_staticText3111;
		wxTextCtrl* m_txtSesionesPagasMod;
		wxStaticText* m_staticText53;
		wxTextCtrl* m_txtObservaciones;
		wxButton* m_button10;
		wxButton* m_botonGuardarModPaciente;

		// Virtual event handlers, override them in your derived class
		virtual void OnCancelarModClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGuardarModClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		ModificarPacientePrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Modificar Datos del Paciente"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 540,392 ), long style = wxDEFAULT_DIALOG_STYLE );

		~ModificarPacientePrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BuscarPacienteHija
///////////////////////////////////////////////////////////////////////////////
class BuscarPacienteHija : public wxDialog
{
	private:

	protected:
		wxStaticText* m_txtDniBuscarPac;
		wxTextCtrl* m_textDniABuscar;
		wxButton* m_btnBuscarPac;
		wxStaticText* m_txtNombrePac;
		wxTextCtrl* m_textCtrl33;
		wxStaticText* m_txtApellidoPac;
		wxTextCtrl* m_textCtrl34;
		wxStaticText* m_txtTelefonoPac;
		wxTextCtrl* m_textCtrl35;
		wxStaticText* m_txtObraSocialPac;
		wxTextCtrl* m_textCtrl30;
		wxStaticText* m_txtSesionesPac;
		wxTextCtrl* m_textCtrl301;

		// Virtual event handlers, override them in your derived class
		virtual void OnBuscarPacClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		BuscarPacienteHija( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Buscar Paciente Por DNI"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 449,235 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BuscarPacienteHija();

};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaKinesiologosPrincipal1
///////////////////////////////////////////////////////////////////////////////
class VentanaKinesiologosPrincipal1 : public wxDialog
{
	private:

	protected:
		wxButton* m_buttonRegistrarKine;
		wxButton* m_buttonVerKines;
		wxButton* m_buttonVolverKines;

		// Virtual event handlers, override them in your derived class
		virtual void OnRegistrarKineClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnVerKinesClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnVolverKinesClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		VentanaKinesiologosPrincipal1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Menú Kinesiologos"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 482,245 ), long style = wxDEFAULT_DIALOG_STYLE );

		~VentanaKinesiologosPrincipal1();

};

///////////////////////////////////////////////////////////////////////////////
/// Class RegistrarKinesiologoPrincipal
///////////////////////////////////////////////////////////////////////////////
class RegistrarKinesiologoPrincipal : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText11;
		wxTextCtrl* m_textNombreKine;
		wxStaticText* m_staticText12;
		wxTextCtrl* m_textApellidoKine;
		wxStaticText* m_staticText13;
		wxTextCtrl* m_textDniKine;
		wxStaticText* m_staticText14;
		wxTextCtrl* m_textTelefonoKine;
		wxStaticText* m_staticText15;
		wxTextCtrl* m_textEspecialidadKine;
		wxStaticText* m_staticText16;
		wxTextCtrl* m_textMatriculaKine;
		wxButton* m_buttonCancelarKine;
		wxButton* m_buttonAceptarKine;

		// Virtual event handlers, override them in your derived class
		virtual void OnCancelarKineClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAceptarKineClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		RegistrarKinesiologoPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Registrar Nuevo Kinesiólogo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,400 ), long style = wxDEFAULT_DIALOG_STYLE );

		~RegistrarKinesiologoPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class VerKinesiologosPrincipal
///////////////////////////////////////////////////////////////////////////////
class VerKinesiologosPrincipal : public wxDialog
{
	private:

	protected:
		wxGrid* m_grillaKinesiologos;
		wxButton* m_botonVolverListaKinesiologos;
		wxButton* m_botonModificarKinesiologos;
		wxButton* m_buttonEliminarListaKinesiologos;
		wxButton* m_buttonAgregarListaKinesiologos;

		// Virtual event handlers, override them in your derived class
		virtual void VolverListaKinesiologos( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonModKinesiologo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEliminarClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAgregarClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		VerKinesiologosPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Listado de Kinesiologos"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 898,436 ), long style = wxDEFAULT_DIALOG_STYLE );

		~VerKinesiologosPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ModificarKinesiologosPrincipal
///////////////////////////////////////////////////////////////////////////////
class ModificarKinesiologosPrincipal : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText57;
		wxTextCtrl* m_textNombre;
		wxStaticText* m_staticText58;
		wxTextCtrl* m_textApellido;
		wxStaticText* m_staticText59;
		wxTextCtrl* m_textTelefono;
		wxStaticText* m_staticText60;
		wxTextCtrl* m_textDni;
		wxStaticText* m_staticText61;
		wxTextCtrl* m_textEspecialidad;
		wxStaticText* m_staticText62;
		wxTextCtrl* m_textMatricula;
		wxStaticText* m_staticText63;
		wxTextCtrl* m_textCantPacientesAtend;
		wxButton* m_botonCancelarModPaciente;
		wxButton* m_botonAceptarModPaciente;

		// Virtual event handlers, override them in your derived class
		virtual void ClickBotonCancelarModKinesiologo( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBotonAceptarMod( wxCommandEvent& event ) { event.Skip(); }


	public:

		ModificarKinesiologosPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 561,352 ), long style = wxDEFAULT_DIALOG_STYLE );

		~ModificarKinesiologosPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BuscarKinesiologoPrincipal
///////////////////////////////////////////////////////////////////////////////
class BuscarKinesiologoPrincipal : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText35;
		wxTextCtrl* m_textDniABuscar;
		wxButton* m_buttonEjecutarBusqueda;
		wxStaticText* m_staticText37;
		wxTextCtrl* m_textCtrl33;
		wxStaticText* m_staticText39;
		wxTextCtrl* m_textCtrl34;
		wxStaticText* m_staticText40;
		wxTextCtrl* m_textCtrl35;
		wxStaticText* m_staticText34;
		wxTextCtrl* m_textCtrl30;

		// Virtual event handlers, override them in your derived class
		virtual void OnEjecutarBusquedaClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		BuscarKinesiologoPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Buscar Kinesiólogo"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 449,235 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BuscarKinesiologoPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaTurnosPrincipal
///////////////////////////////////////////////////////////////////////////////
class VentanaTurnosPrincipal : public wxDialog
{
	private:

	protected:
		wxButton* m_buttonReservarTurno;
		wxButton* m_buttonVerAgenda;
		wxButton* m_buttonVolverTurnos;

		// Virtual event handlers, override them in your derived class
		virtual void OnReservarTurnoClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnVerAgendaClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnVolverTurnosClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		VentanaTurnosPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Menú Turnos"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 482,245 ), long style = wxDEFAULT_DIALOG_STYLE );

		~VentanaTurnosPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ReservarTurnoPrincipal
///////////////////////////////////////////////////////////////////////////////
class ReservarTurnoPrincipal : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText44;
		wxTextCtrl* m_textDniPaciente;
		wxStaticText* m_staticText72;
		wxChoice* m_opcionesKinesiologos;
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textCtrl7;
		wxStaticText* m_staticText10;
		wxTextCtrl* m_textCtrl8;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_textCtrl9;
		wxStaticText* m_staticText61;
		wxTextCtrl* m_textHora;
		wxStaticText* m_staticText56;
		wxChoice* m_choiceInstalacion;
		wxStaticText* m_staticText57;
		wxTextCtrl* m_textObservaciones;
		wxButton* m_buttonCancelarReserva;
		wxButton* m_buttonAceptarReserva;

		// Virtual event handlers, override them in your derived class
		virtual void oncancelarReservaClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAceptarReservaClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		ReservarTurnoPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Reservar Nuevo Turno"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );

		~ReservarTurnoPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaAgendaTurnosPrincipal
///////////////////////////////////////////////////////////////////////////////
class VentanaAgendaTurnosPrincipal : public wxDialog
{
	private:

	protected:
		wxGrid* m_grillaTurnos;
		wxButton* m_btnVolver;
		wxButton* m_btnEliminarTurno;
		wxButton* m_btnModificarTurno;
		wxButton* m_btnAgregarTurno;

		// Virtual event handlers, override them in your derived class
		virtual void OnVolverClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEliminarTurnoClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnModificarTurnoClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAgregarTurnoClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		VentanaAgendaTurnosPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 816,293 ), long style = wxDEFAULT_DIALOG_STYLE );

		~VentanaAgendaTurnosPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ModificarTurnosPrincipal
///////////////////////////////////////////////////////////////////////////////
class ModificarTurnosPrincipal : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText44;
		wxTextCtrl* m_textDniPacienteMod;
		wxStaticText* m_staticText72;
		wxChoice* m_choiceKinesiologoMod;
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textDiaMod;
		wxStaticText* m_staticText10;
		wxTextCtrl* m_textMesMod;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_textAnioMod;
		wxStaticText* m_staticText61;
		wxTextCtrl* m_textHoraMod;
		wxStaticText* m_staticText56;
		wxChoice* m_choiceInstalacionMod;
		wxStaticText* m_staticText561;
		wxChoice* m_choiceEstadoMod;
		wxStaticText* m_staticText57;
		wxTextCtrl* m_textObservacionesMod;
		wxButton* m_btnCancelarMod;
		wxButton* m_btnGuardarMod;

		// Virtual event handlers, override them in your derived class
		virtual void OnCancelarModClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGuardarModClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		ModificarTurnosPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~ModificarTurnosPrincipal();

};

