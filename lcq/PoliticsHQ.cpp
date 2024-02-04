#include "PoliticsHQ.h"

//(*InternalHeaders(PoliticsHQ)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(PoliticsHQ)
//*)

BEGIN_EVENT_TABLE(PoliticsHQ,wxFrame)
	//(*EventTable(PoliticsHQ)
	//*)
END_EVENT_TABLE()

PoliticsHQ::PoliticsHQ(wxWindow* parent)
{
	//(*Initialize(PoliticsHQ)
	wxXmlResource::Get()->LoadObject(this,parent,_T("PoliticsHQ"),_T("wxFrame"));
	StaticBox1 = (wxStaticBox*)FindWindow(XRCID("ID_STATICBOX1"));
	SearchCtrl1 = (wxSearchCtrl*)FindWindow(XRCID("ID_SEARCHCTRL1"));
	Panel1 = (wxPanel*)FindWindow(XRCID("ID_PANEL1"));
	//*)
}

PoliticsHQ::~PoliticsHQ()
{
	//(*Destroy(PoliticsHQ)
	//*)
}

