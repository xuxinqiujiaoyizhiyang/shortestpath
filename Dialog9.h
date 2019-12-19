#ifndef DIALOG9_H
#define DIALOG9_H

//(*Headers(Dialog9)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog9: public wxDialog
{
	public:

		Dialog9(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog9();

		//(*Declarations(Dialog9)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog9)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog9)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
