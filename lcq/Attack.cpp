#include "Attack.h"

//(*InternalHeaders(Attack)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(Attack)
//*)

BEGIN_EVENT_TABLE(Attack,wxFrame)
	//(*EventTable(Attack)
	//*)
END_EVENT_TABLE()

Attack::Attack(wxWindow* parent)
{
	//(*Initialize(Attack)
	wxXmlResource::Get()->LoadObject(this,parent,_T("Attack"),_T("wxFrame"));
	HyperlinkCtrl1 = (wxHyperlinkCtrl*)FindWindow(XRCID("ID_HYPERLINKCTRL1"));

	Connect(XRCID("ID_HYPERLINKCTRL1"),wxEVT_COMMAND_HYPERLINK,(wxObjectEventFunction)&Attack::OnHyperlinkCtrl1Click);
	//*)
}

Attack::~Attack()
{
	//(*Destroy(Attack)
	//*)
}


void Attack::OnHyperlinkCtrl1Click(wxCommandEvent& event)
{
}
