#ifndef OUTDIALOG_H
#define OUTDIALOG_H

//(*Headers(outDialog)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class outDialog: public wxDialog
{
	public:

		outDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~outDialog();

		//(*Declarations(outDialog)
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		//*)

	protected:

		//(*Identifiers(outDialog)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		//*)

	private:

		//(*Handlers(outDialog)
		void OnPanel1Paint(wxPaintEvent& event);
		void OnInit(wxInitDialogEvent& event);
		void OnTextCtrl1Text(wxCommandEvent& event);
		void OnTextCtrl1Text1(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
