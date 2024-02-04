#ifndef G77_H
#define G77_H

//(*Headers(G77)
#include <wx/frame.h>
#include <wx/listbox.h>
//*)

class G77: public wxFrame
{
	public:

		G77(wxWindow* parent);
		virtual ~G77();

		//(*Declarations(G77)
		wxListBox* ListBox1;
		//*)

	protected:

		//(*Identifiers(G77)
		//*)

	private:

		//(*Handlers(G77)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
