#include "Dialog3.h"

//(*InternalHeaders(Dialog3)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Dialog3)
const long Dialog3::ID_STATICBITMAP1 = wxNewId();
const long Dialog3::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Dialog3,wxDialog)
	//(*EventTable(Dialog3)
	//*)
END_EVENT_TABLE()

Dialog3::Dialog3(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Dialog3)
	wxBoxSizer* BoxSizer1;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\asus\\Desktop\\res\\2.png"))), wxDefaultPosition, wxDefaultSize, wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer1->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("                         ����ѧ¥\n\nһ�����\n\n��������ѧ¥���á�U���ͽṹ����A,B��������ѧ¥\n��ÿһ������ѧ¥��Ϊ���ݽ��Һ���ͨ���ң��ṩ\n�˳�����Ͽοռ䡣\n\n����ְ��\n\n������ѧ���ϿΣ���ϰ�Լ�����ʹ�ã�ͬʱ����ʦ\n�ṩ���ݵ���Ϣ����\n"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(255,0,0));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

Dialog3::~Dialog3()
{
	//(*Destroy(Dialog3)
	//*)
}

