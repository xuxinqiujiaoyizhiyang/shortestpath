#include "Dialog6.h"

//(*InternalHeaders(Dialog6)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Dialog6)
const long Dialog6::ID_STATICBITMAP1 = wxNewId();
const long Dialog6::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Dialog6,wxDialog)
	//(*EventTable(Dialog6)
	//*)
END_EVENT_TABLE()

Dialog6::Dialog6(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Dialog6)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\asus\\Desktop\\res\\5.png"))), wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer1->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("                        �������\nһ�����\n\nĿǰ������У��Ψһ��ʳ�ã��������㣬�ĸ�ʳ\n�ã�������ͨ�������������������������������\n��ѧ��ϲ�����ҿ��ǵ��ܶ��������ʳ���ɡ�\n\n����ְ��\n\n�������ְ����ѧ����ʳ���á�"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(255,0,0));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

Dialog6::~Dialog6()
{
	//(*Destroy(Dialog6)
	//*)
}

