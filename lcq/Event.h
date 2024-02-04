#ifndef EVENT_H
#define EVENT_H

//(*Headers(Event)
#include <wx/choicebk.h>
#include <wx/frame.h>
#include <wx/notebook.h>
//*)

class Event: public wxFrame
{
	public:

		Event(wxWindow* parent);
		virtual ~Event();

		//(*Declarations(Event)
		wxChoicebook* Choicebook1;
		//*)

	protected:

		//(*Identifiers(Event)
		//*)

	private:

		//(*Handlers(Event)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
