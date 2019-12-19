#ifndef DIALOG17_H
#define DIALOG17_H

//(*Headers(Dialog17)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog17: public wxDialog
{
	public:

		Dialog17(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog17();

		//(*Declarations(Dialog17)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog17)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog17)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
