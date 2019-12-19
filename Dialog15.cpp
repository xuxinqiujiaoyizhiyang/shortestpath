#include "Dialog15.h"

//(*InternalHeaders(Dialog15)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Dialog15)
const long Dialog15::ID_STATICBITMAP1 = wxNewId();
const long Dialog15::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Dialog15,wxDialog)
	//(*EventTable(Dialog15)
	//*)
END_EVENT_TABLE()

Dialog15::Dialog15(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Dialog15)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\asus\\Desktop\\res\\9.jpg")).Rescale(wxSize(477,337).GetWidth(),wxSize(477,337).GetHeight())), wxDefaultPosition, wxSize(477,337), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer1->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("                           ����ɽ\n\nһ�����\n\n��������������ɽ����������ɽ�羰��������\n��������ʷ��Ϊ�ƾõ�Сͤ�ӣ�����һ����ζ��\n\n����ְ��\n\n������ʦ�������Σ��ճ����;��ۡ�"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(255,0,0));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

Dialog15::~Dialog15()
{
	//(*Destroy(Dialog15)
	//*)
}

