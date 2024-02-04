#ifndef UNDERATTACK_H
#define UNDERATTACK_H

//(*Headers(UnderAttack)
#include <wx/frame.h>
#include <wx/listbook.h>
#include <wx/notebook.h>
//*)

class UnderAttack: public wxFrame
{
	public:

		UnderAttack(wxWindow* parent);
		virtual ~UnderAttack();

		//(*Declarations(UnderAttack)
		wxListbook* Listbook1;
		//*)

	protected:

		//(*Identifiers(UnderAttack)
		//*)

	private:

		//(*Handlers(UnderAttack)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
