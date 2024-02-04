#ifndef UNDER_H
#define UNDER_H

//(*Headers(Under)
#include <wx/frame.h>
#include <wx/gauge.h>
//*)

class Under: public wxFrame
{
	public:

		Under(wxWindow* parent);
		virtual ~Under();

		//(*Declarations(Under)
		wxGauge* Gauge1;
		//*)

	protected:

		//(*Identifiers(Under)
		//*)

	private:

		//(*Handlers(Under)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
