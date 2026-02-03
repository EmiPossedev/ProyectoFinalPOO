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

