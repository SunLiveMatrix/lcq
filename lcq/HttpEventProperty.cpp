#include "HttpEventProperty.h"

//(*InternalHeaders(HttpEventProperty)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(HttpEventProperty)
//*)

BEGIN_EVENT_TABLE(HttpEventProperty,wxScrollingDialog)
	//(*EventTable(HttpEventProperty)
	//*)
END_EVENT_TABLE()

HttpEventProperty::HttpEventProperty(wxWindow* parent)
{
	//(*Initialize(HttpEventProperty)
	wxXmlResource::Get()->LoadObject(this,parent,_T("HttpEventProperty"),_T("wxScrollingDialog"));
	Listbook1 = (wxListbook*)FindWindow(XRCID("ID_LISTBOOK1"));
	//*)
}

HttpEventProperty::~HttpEventProperty()
{
	//(*Destroy(HttpEventProperty)
	//*)
}

