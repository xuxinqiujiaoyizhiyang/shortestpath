#include "Dialog2.h"

//(*InternalHeaders(Dialog2)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Dialog2)
const long Dialog2::ID_STATICBITMAP2 = wxNewId();
const long Dialog2::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Dialog2,wxDialog)
	//(*EventTable(Dialog2)
	//*)
END_EVENT_TABLE()

Dialog2::Dialog2(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Dialog2)
	wxBoxSizer* BoxSizer1;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap2 = new wxStaticBitmap(this, ID_STATICBITMAP2, wxBitmap(wxImage(_T("C:\\Users\\asus\\Desktop\\res\\7.png")).Rescale(wxSize(485,403).GetWidth(),wxSize(485,403).GetHeight())), wxDefaultPosition, wxSize(485,403), wxSIMPLE_BORDER, _T("ID_STATICBITMAP2"));
	BoxSizer1->Add(StaticBitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("                            ͼ��� \n\nһ�����\n\n����ͼ����Խ������������ͻ���Ա�Уѧ������\n����Ϊ��ɫ���Ի�ѧ����Ϊ�ص㣬�ɼ��侭������\n�ͼ��������飬ͬʱע�ؾ��ܡ��ķ�����Ϣѧ�Ƶ�\n�����ղأ����ѳ����γ����Ի�ѧ����Ϊ�ص㣬��\n�վ��ܡ��ķ�����Ϣ���ۺ�ѧ�ƵĹݲ�������ϵ��\n���ղػ�ѧ��������������ࡢ��ȫ�ĸ�Уͼ��ݡ�\n\n����ְ��\n\nѧ������ͼ���Լ���ϰ�ĵط�����Ա�칫�����ڵ�"), wxDefaultPosition, wxSize(485,260), 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(255,0,0));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

Dialog2::~Dialog2()
{
	//(*Destroy(Dialog2)
	//*)
}

