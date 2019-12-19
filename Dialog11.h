#ifndef DIALOG11_H
#define DIALOG11_H

//(*Headers(Dialog11)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog11: public wxDialog
{
	public:

		Dialog11(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog11();

		//(*Declarations(Dialog11)
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText1;
		//*)

		//(*Identifiers(Dialog11)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog11)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
