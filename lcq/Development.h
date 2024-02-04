#ifndef DEVELOPMENT_H
#define DEVELOPMENT_H

//(*Headers(Development)
#include <wx/dialog.h>
#include <wx/listctrl.h>
//*)

class Development: public wxDialog
{
	public:

		Development(wxWindow* parent);
		virtual ~Development();

		//(*Declarations(Development)
		wxListCtrl* ListCtrl1;
		//*)

	protected:

		//(*Identifiers(Development)
		//*)

	private:

		//(*Handlers(Development)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
