#include "Dialog18.h"

//(*InternalHeaders(Dialog18)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Dialog18)
const long Dialog18::ID_STATICBITMAP1 = wxNewId();
const long Dialog18::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Dialog18,wxDialog)
	//(*EventTable(Dialog18)
	//*)
END_EVENT_TABLE()

Dialog18::Dialog18(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Dialog18)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\asus\\Desktop\\res\\10.jpg")).Rescale(wxSize(454,420).GetWidth(),wxSize(454,420).GetHeight())), wxDefaultPosition, wxSize(454,420), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer1->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("                         Уҽ��\n\nһ�����\n\nУҽ�������ڻ������¥������ѧ����ÿ��ѧ\n�ڵ���죬�ճ�ѧ���Ŀ������ڲ����ŷֲ���\nȷ���������ۿƣ��ڿƵȶ�����ҡ�\n\n����ְ��\n\n����ѧ�ӿ����ĵط���\n"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(255,0,0));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

Dialog18::~Dialog18()
{
	//(*Destroy(Dialog18)
	//*)
}

