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
#include <wx/listctrl.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/statline.h>

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
		wxButton* m_button11;
		wxButton* m_button12;

		// Virtual event handlers, override them in your derived class
		virtual void OnRegistrarClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnVerListaClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbrirBusquedaClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		VentanaPacientesPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 482,245 ), long style = wxDEFAULT_DIALOG_STYLE );

		~VentanaPacientesPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class VerPacienteHija
///////////////////////////////////////////////////////////////////////////////
class VerPacienteHija : public wxDialog
{
	private:

	protected:
		wxListCtrl* m_listaPacientes;
		wxButton* m_buttonVolver;

		// Virtual event handlers, override them in your derived class
		virtual void OnVolverClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		VerPacienteHija( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Listado de Pacientes"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~VerPacienteHija();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BuscarPacienteHija
///////////////////////////////////////////////////////////////////////////////
class BuscarPacienteHija : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText9;
		wxTextCtrl* m_txtDniBuscar;
		wxButton* m_buttonBuscarAccion;
		wxStaticLine* m_staticline1;
		wxStaticText* m_lblResultado;

		// Virtual event handlers, override them in your derived class
		virtual void OnBuscarClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		BuscarPacienteHija( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("BuscarPaciente"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~BuscarPacienteHija();

};

///////////////////////////////////////////////////////////////////////////////
/// Class RegistrarPacientesPrincipal
///////////////////////////////////////////////////////////////////////////////
class RegistrarPacientesPrincipal : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrl2;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_textCtrl3;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl6;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl4;
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textCtrl7;
		wxStaticText* m_staticText10;
		wxTextCtrl* m_textCtrl8;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_textCtrl9;
		wxButton* m_button10;
		wxButton* m_button11;

		// Virtual event handlers, override them in your derived class
		virtual void ClickBotonCancelarHija( wxCommandEvent& event ) { event.Skip(); }


	public:

		RegistrarPacientesPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 520,288 ), long style = wxDEFAULT_DIALOG_STYLE );

		~RegistrarPacientesPrincipal();

};

