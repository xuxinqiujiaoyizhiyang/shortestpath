#ifndef DIALOG16_H
#define DIALOG16_H

//(*Headers(Dialog16)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog16: public wxDialog
{
	public:

		Dialog16(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog16();

		//(*Declarations(Dialog16)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog16)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog16)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
