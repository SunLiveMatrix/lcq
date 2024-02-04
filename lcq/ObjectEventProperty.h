#ifndef OBJECTEVENTPROPERTY_H
#define OBJECTEVENTPROPERTY_H

//(*Headers(ObjectEventProperty)
#include <wx/dialog.h>
//*)

class ObjectEventProperty: public wxDialog
{
	public:

		ObjectEventProperty(wxWindow* parent);
		virtual ~ObjectEventProperty();

		//(*Declarations(ObjectEventProperty)
		//*)

	protected:

		//(*Identifiers(ObjectEventProperty)
		//*)

	private:

		//(*Handlers(ObjectEventProperty)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
