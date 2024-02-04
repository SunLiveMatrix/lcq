#ifndef CHIZZYUNDERATTACK_H
#define CHIZZYUNDERATTACK_H

//(*Headers(ChizzyUnderAttack)
#include <wx/dialog.h>
#include <wx/notebook.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/richtext/richtextstyles.h>
#include <wx/treebook.h>
#include <wx/treectrl.h>
//*)

class ChizzyUnderAttack: public wxDialog
{
	public:

		ChizzyUnderAttack(wxWindow* parent);
		virtual ~ChizzyUnderAttack();

		//(*Declarations(ChizzyUnderAttack)
		wxNotebook* Notebook1;
		wxRichTextCtrl* RichTextCtrl1;
		wxRichTextStyleListBox* RichTextStyleListBox1;
		wxTreeCtrl* TreeCtrl1;
		wxTreebook* Treebook1;
		//*)

	protected:

		//(*Identifiers(ChizzyUnderAttack)
		//*)

	private:

		//(*Handlers(ChizzyUnderAttack)
		void OnNotebook1PageChanged(wxNotebookEvent& event);
		void OnRichTextCtrl1Text(wxCommandEvent& event);
		void OnInit(wxInitDialogEvent& event);
		void OnEraseBackground(wxEraseEvent& event);
		void OnChar(wxKeyEvent& event);
		void OnMouseMove(wxMouseEvent& event);
		void OnMouseWheel(wxMouseEvent& event);
		void OnSetCursor(wxSetCursorEvent& event);
		void OnResize(wxSizeEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
