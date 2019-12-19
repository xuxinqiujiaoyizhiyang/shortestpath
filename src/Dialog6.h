#ifndef DIALOG6_H
#define DIALOG6_H

//(*Headers(Dialog6)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog6: public wxDialog
{
	public:

		Dialog6(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog6();

		//(*Declarations(Dialog6)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog6)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog6)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
