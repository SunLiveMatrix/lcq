#include "Under.h"

//(*InternalHeaders(Under)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(Under)
//*)

BEGIN_EVENT_TABLE(Under,wxFrame)
	//(*EventTable(Under)
	//*)
END_EVENT_TABLE()

Under::Under(wxWindow* parent)
{
	//(*Initialize(Under)
	wxXmlResource::Get()->LoadObject(this,parent,_T("Under"),_T("wxFrame"));
	Gauge1 = (wxGauge*)FindWindow(XRCID("ID_GAUGE1"));
	//*)
}

Under::~Under()
{
	//(*Destroy(Under)
	//*)
}

