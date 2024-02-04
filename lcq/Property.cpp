#include "Property.h"

//(*InternalHeaders(Property)
#include <wx/xrc/xmlres.h>
//*)

//(*IdInit(Property)
//*)

BEGIN_EVENT_TABLE(Property,wxFrame)
	//(*EventTable(Property)
	//*)
END_EVENT_TABLE()

Property::Property(wxWindow* parent)
{
	//(*Initialize(Property)
	wxXmlResource::Get()->LoadObject(this,parent,_T("Property"),_T("wxFrame"));
	SpinButton1 = (wxSpinButton*)FindWindow(XRCID("ID_SPINBUTTON1"));
	RichTextStyleListCtrl1 = (wxRichTextStyleListCtrl*)FindWindow(XRCID("ID_RICHTEXTSTYLELISTCTRL1"));
	RichTextStyleListBox1 = (wxRichTextStyleListBox*)FindWindow(XRCID("ID_RICHTEXTSTYLELISTBOX1"));
	SpinCtrlDouble1 = (wxSpinCtrlDouble*)FindWindow(XRCID("ID_SPINCTRLDOUBLE1"));
	ToggleButton1 = (wxToggleButton*)FindWindow(XRCID("ID_TOGGLEBUTTON1"));
	ToggleButton2 = (wxToggleButton*)FindWindow(XRCID("ID_TOGGLEBUTTON2"));
	Panel1 = (wxPanel*)FindWindow(XRCID("ID_PANEL1"));

	Connect(XRCID("ID_TOGGLEBUTTON1"),wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&Property::OnToggleButton1Toggle);
	Connect(XRCID("ID_TOGGLEBUTTON2"),wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&Property::OnToggleButton1Toggle);
	//*)
}

Property::~Property()
{
	//(*Destroy(Property)
	//*)
}


void Property::OnToggleButton1Toggle(wxCommandEvent& event)
{
}
