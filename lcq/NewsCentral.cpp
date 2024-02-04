#include "NewsCentral.h"

//(*InternalHeaders(NewsCentral)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(NewsCentral)
//*)

BEGIN_EVENT_TABLE(NewsCentral,wxPanel)
	//(*EventTable(NewsCentral)
	//*)
END_EVENT_TABLE()

NewsCentral::NewsCentral(wxWindow* parent)
{
	//(*Initialize(NewsCentral)
	wxXmlResource::Get()->LoadObject(this,parent,_T("NewsCentral"),_T("wxPanel"));
	Panel1 = (wxPanel*)FindWindow(XRCID("ID_PANEL1"));
	Panel2 = (wxPanel*)FindWindow(XRCID("ID_PANEL2"));
	Panel3 = (wxPanel*)FindWindow(XRCID("ID_PANEL3"));
	HyperlinkCtrl1 = (wxHyperlinkCtrl*)FindWindow(XRCID("ID_HYPERLINKCTRL1"));
	StaticText1 = (wxStaticText*)FindWindow(XRCID("ID_STATICTEXT1"));
	//*)
}

NewsCentral::~NewsCentral()
{
	//(*Destroy(NewsCentral)
	//*)
}

