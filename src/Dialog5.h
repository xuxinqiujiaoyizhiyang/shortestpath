#ifndef DIALOG5_H
#define DIALOG5_H

//(*Headers(Dialog5)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog5: public wxDialog
{
	public:

		Dialog5(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog5();

		//(*Declarations(Dialog5)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog5)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog5)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
