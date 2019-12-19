#ifndef DIALOG4_H
#define DIALOG4_H

//(*Headers(Dialog4)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog4: public wxDialog
{
	public:

		Dialog4(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog4();

		//(*Declarations(Dialog4)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog4)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog4)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
