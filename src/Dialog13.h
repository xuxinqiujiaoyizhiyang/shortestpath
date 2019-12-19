#ifndef DIALOG13_H
#define DIALOG13_H

//(*Headers(Dialog13)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog13: public wxDialog
{
	public:

		Dialog13(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog13();

		//(*Declarations(Dialog13)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog13)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog13)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
