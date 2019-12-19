#ifndef DIALOG18_H
#define DIALOG18_H

//(*Headers(Dialog18)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog18: public wxDialog
{
	public:

		Dialog18(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog18();

		//(*Declarations(Dialog18)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog18)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog18)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
