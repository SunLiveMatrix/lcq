#ifndef POLITICSHQ_H
#define POLITICSHQ_H

//(*Headers(PoliticsHQ)
#include <wx/frame.h>
#include <wx/panel.h>
#include <wx/srchctrl.h>
#include <wx/statbox.h>
//*)

class PoliticsHQ: public wxFrame
{
	public:

		PoliticsHQ(wxWindow* parent);
		virtual ~PoliticsHQ();

		//(*Declarations(PoliticsHQ)
		wxPanel* Panel1;
		wxSearchCtrl* SearchCtrl1;
		wxStaticBox* StaticBox1;
		//*)

	protected:

		//(*Identifiers(PoliticsHQ)
		//*)

	private:

		//(*Handlers(PoliticsHQ)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
