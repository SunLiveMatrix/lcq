#include "ChizzyUnderAttack.h"

//(*InternalHeaders(ChizzyUnderAttack)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(ChizzyUnderAttack)
//*)

BEGIN_EVENT_TABLE(ChizzyUnderAttack,wxDialog)
	//(*EventTable(ChizzyUnderAttack)
	//*)
END_EVENT_TABLE()

ChizzyUnderAttack::ChizzyUnderAttack(wxWindow* parent)
{
	//(*Initialize(ChizzyUnderAttack)
	wxXmlResource::Get()->LoadObject(this,parent,_T("ChizzyUnderAttack"),_T("wxDialog"));
	RichTextCtrl1 = (wxRichTextCtrl*)FindWindow(XRCID("ID_RICHTEXTCTRL1"));
	Notebook1 = (wxNotebook*)FindWindow(XRCID("ID_NOTEBOOK1"));
	TreeCtrl1 = (wxTreeCtrl*)FindWindow(XRCID("ID_TREECTRL1"));
	Treebook1 = (wxTreebook*)FindWindow(XRCID("ID_TREEBOOK1"));
	RichTextStyleListBox1 = (wxRichTextStyleListBox*)FindWindow(XRCID("ID_RICHTEXTSTYLELISTBOX1"));

	Connect(XRCID("ID_RICHTEXTCTRL1"),wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&ChizzyUnderAttack::OnRichTextCtrl1Text);
	Connect(XRCID("ID_NOTEBOOK1"),wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED,(wxObjectEventFunction)&ChizzyUnderAttack::OnNotebook1PageChanged);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&ChizzyUnderAttack::OnInit);
	Connect(wxEVT_ERASE_BACKGROUND,(wxObjectEventFunction)&ChizzyUnderAttack::OnEraseBackground);
	Connect(wxEVT_CHAR,(wxObjectEventFunction)&ChizzyUnderAttack::OnChar);
	Connect(wxEVT_MOTION,(wxObjectEventFunction)&ChizzyUnderAttack::OnMouseMove);
	Connect(wxEVT_MOUSEWHEEL,(wxObjectEventFunction)&ChizzyUnderAttack::OnMouseWheel);
	Connect(wxEVT_SET_CURSOR,(wxObjectEventFunction)&ChizzyUnderAttack::OnSetCursor);
	Connect(wxEVT_SIZE,(wxObjectEventFunction)&ChizzyUnderAttack::OnResize);
	//*)
}

ChizzyUnderAttack::~ChizzyUnderAttack()
{
	//(*Destroy(ChizzyUnderAttack)
	//*)
}


void ChizzyUnderAttack::OnNotebook1PageChanged(wxNotebookEvent& event)
{
}

void ChizzyUnderAttack::OnRichTextCtrl1Text(wxCommandEvent& event)
{
}

void ChizzyUnderAttack::OnInit(wxInitDialogEvent& event)
{
}

void ChizzyUnderAttack::OnEraseBackground(wxEraseEvent& event)
{
}

void ChizzyUnderAttack::OnChar(wxKeyEvent& event)
{
}

void ChizzyUnderAttack::OnMouseMove(wxMouseEvent& event)
{
}

void ChizzyUnderAttack::OnMouseWheel(wxMouseEvent& event)
{
}

void ChizzyUnderAttack::OnSetCursor(wxSetCursorEvent& event)
{
}

void ChizzyUnderAttack::OnResize(wxSizeEvent& event)
{
}
