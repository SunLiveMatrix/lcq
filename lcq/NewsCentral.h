#ifndef NEWSCENTRAL_H
#define NEWSCENTRAL_H

//(*Headers(NewsCentral)
#include <wx/hyperlink.h>
#include <wx/panel.h>
#include <wx/stattext.h>
//*)

class NewsCentral: public wxPanel
{
	public:

		NewsCentral(wxWindow* parent);
		virtual ~NewsCentral();

		//(*Declarations(NewsCentral)
		wxHyperlinkCtrl* HyperlinkCtrl1;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxPanel* Panel3;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(NewsCentral)
		//*)

	private:

		//(*Handlers(NewsCentral)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
