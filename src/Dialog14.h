#ifndef DIALOG14_H
#define DIALOG14_H

//(*Headers(Dialog14)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog14: public wxDialog
{
	public:

		Dialog14(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog14();

		//(*Declarations(Dialog14)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog14)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog14)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
