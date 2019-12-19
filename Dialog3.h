#ifndef DIALOG3_H
#define DIALOG3_H

//(*Headers(Dialog3)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog3: public wxDialog
{
	public:

		Dialog3(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog3();

		//(*Declarations(Dialog3)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog3)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog3)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
