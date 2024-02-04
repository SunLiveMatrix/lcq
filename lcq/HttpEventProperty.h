#ifndef HTTPEVENTPROPERTY_H
#define HTTPEVENTPROPERTY_H

//(*Headers(HttpEventProperty)
#include "scrollingdialog.h"
#include <wx/listbook.h>
#include <wx/notebook.h>
//*)

class HttpEventProperty: public wxScrollingDialog
{
	public:

		HttpEventProperty(wxWindow* parent);
		virtual ~HttpEventProperty();

		//(*Declarations(HttpEventProperty)
		wxListbook* Listbook1;
		//*)

	protected:

		//(*Identifiers(HttpEventProperty)
		//*)

	private:

		//(*Handlers(HttpEventProperty)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
