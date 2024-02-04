#ifndef ATTACK_H
#define ATTACK_H

//(*Headers(Attack)
#include <wx/frame.h>
#include <wx/hyperlink.h>
//*)

class Attack: public wxFrame
{
	public:

		Attack(wxWindow* parent);
		virtual ~Attack();

		//(*Declarations(Attack)
		wxHyperlinkCtrl* HyperlinkCtrl1;
		//*)

	protected:

		//(*Identifiers(Attack)
		//*)

	private:

		//(*Handlers(Attack)
		void OnHyperlinkCtrl1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
