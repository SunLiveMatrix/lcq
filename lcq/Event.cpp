#include "Event.h"

//(*InternalHeaders(Event)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(Event)
//*)

BEGIN_EVENT_TABLE(Event,wxFrame)
	//(*EventTable(Event)
	//*)
END_EVENT_TABLE()

Event::Event(wxWindow* parent)
{
	//(*Initialize(Event)
	wxXmlResource::Get()->LoadObject(this,parent,_T("Event"),_T("wxFrame"));
	Choicebook1 = (wxChoicebook*)FindWindow(XRCID("ID_CHOICEBOOK1"));
	//*)
}

Event::~Event()
{
	//(*Destroy(Event)
	//*)
}

