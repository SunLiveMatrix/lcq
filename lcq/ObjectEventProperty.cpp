#include "ObjectEventProperty.h"

//(*InternalHeaders(ObjectEventProperty)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(ObjectEventProperty)
//*)

BEGIN_EVENT_TABLE(ObjectEventProperty,wxDialog)
	//(*EventTable(ObjectEventProperty)
	//*)
END_EVENT_TABLE()

ObjectEventProperty::ObjectEventProperty(wxWindow* parent)
{
	//(*Initialize(ObjectEventProperty)
	wxXmlResource::Get()->LoadObject(this,parent,_T("ObjectEventProperty"),_T("wxDialog"));
	//*)
}

ObjectEventProperty::~ObjectEventProperty()
{
	//(*Destroy(ObjectEventProperty)
	//*)
}

