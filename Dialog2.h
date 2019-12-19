#ifndef DIALOG2_H
#define DIALOG2_H

//(*Headers(Dialog2)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Dialog2: public wxDialog
{
	public:

		Dialog2(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Dialog2();

		//(*Declarations(Dialog2)
		wxStaticBitmap* StaticBitmap2;
		wxStaticText* StaticText1;
		//*)

	protected:

		//(*Identifiers(Dialog2)
		static const long ID_STATICBITMAP2;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(Dialog2)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
