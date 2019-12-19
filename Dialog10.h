#ifndef DIALOG10_H
#define DIALOG10_H

//(*Headers(Dialog10)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog10: public wxDialog
{
	public:

		Dialog10(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog10();

		//(*Declarations(Dialog10)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog10)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog10)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
