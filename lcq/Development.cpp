#include "Development.h"

//(*InternalHeaders(Development)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(Development)
//*)

BEGIN_EVENT_TABLE(Development,wxDialog)
	//(*EventTable(Development)
	//*)
END_EVENT_TABLE()

Development::Development(wxWindow* parent)
{
	//(*Initialize(Development)
	wxXmlResource::Get()->LoadObject(this,parent,_T("Development"),_T("wxDialog"));
	ListCtrl1 = (wxListCtrl*)FindWindow(XRCID("ID_LISTCTRL1"));
	//*)
}

Development::~Development()
{
	//(*Destroy(Development)
	//*)
}

