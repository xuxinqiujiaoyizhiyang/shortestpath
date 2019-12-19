#ifndef DIALOG7_H
#define DIALOG7_H

//(*Headers(Dialog7)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog7: public wxDialog
{
	public:

		Dialog7(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog7();

		//(*Declarations(Dialog7)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog7)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog7)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
