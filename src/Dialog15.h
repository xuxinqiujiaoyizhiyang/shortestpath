#ifndef DIALOG15_H
#define DIALOG15_H

//(*Headers(Dialog15)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog15: public wxDialog
{
	public:

		Dialog15(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog15();

		//(*Declarations(Dialog15)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog15)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog15)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
