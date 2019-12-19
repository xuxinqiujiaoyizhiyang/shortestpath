#ifndef DIALOG8_H
#define DIALOG8_H

//(*Headers(Dialog8)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog8: public wxDialog
{
	public:

		Dialog8(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog8();

		//(*Declarations(Dialog8)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog8)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog8)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
