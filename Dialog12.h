#ifndef DIALOG12_H
#define DIALOG12_H

//(*Headers(Dialog12)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog12: public wxDialog
{
	public:

		Dialog12(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog12();

		//(*Declarations(Dialog12)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog12)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog12)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
