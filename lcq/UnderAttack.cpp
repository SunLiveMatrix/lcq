#include "UnderAttack.h"

//(*InternalHeaders(UnderAttack)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(UnderAttack)
//*)

BEGIN_EVENT_TABLE(UnderAttack,wxFrame)
	//(*EventTable(UnderAttack)
	//*)
END_EVENT_TABLE()

UnderAttack::UnderAttack(wxWindow* parent)
{
	//(*Initialize(UnderAttack)
	wxXmlResource::Get()->LoadObject(this,parent,_T("UnderAttack"),_T("wxFrame"));
	Listbook1 = (wxListbook*)FindWindow(XRCID("ID_LISTBOOK1"));
	//*)
}

UnderAttack::~UnderAttack()
{
	//(*Destroy(UnderAttack)
	//*)
}

