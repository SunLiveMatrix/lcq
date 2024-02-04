#ifndef PROPERTY_H
#define PROPERTY_H

//(*Headers(Property)
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/richtext/richtextstyles.h>
#include <wx/spinbutt.h>
#include <wx/spinctrl.h>
#include <wx/tglbtn.h>
//*)

class Property: public wxFrame
{
	public:

		Property(wxWindow* parent);
		virtual ~Property();

		//(*Declarations(Property)
		wxPanel* Panel1;
		wxRichTextStyleListBox* RichTextStyleListBox1;
		wxRichTextStyleListCtrl* RichTextStyleListCtrl1;
		wxSpinButton* SpinButton1;
		wxSpinCtrlDouble* SpinCtrlDouble1;
		wxToggleButton* ToggleButton1;
		wxToggleButton* ToggleButton2;
		//*)

	protected:

		//(*Identifiers(Property)
		//*)

	private:

		//(*Handlers(Property)
		void OnToggleButton1Toggle(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
