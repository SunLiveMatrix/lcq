#include "G77.h"

//(*InternalHeaders(G77)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(G77)
//*)

BEGIN_EVENT_TABLE(G77,wxFrame)
	//(*EventTable(G77)
	//*)
END_EVENT_TABLE()

G77::G77(wxWindow* parent)
{
	//(*Initialize(G77)
	wxXmlResource::Get()->LoadObject(this,parent,_T("G77"),_T("wxFrame"));
	ListBox1 = (wxListBox*)FindWindow(XRCID("ID_LISTBOX1"));
	//*)
}

G77::~G77()
{
	//(*Destroy(G77)
	//*)
}

