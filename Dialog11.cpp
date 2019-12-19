#include "Dialog11.h"

//(*InternalHeaders(Dialog11)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Dialog11)
const long Dialog11::ID_STATICBITMAP1 = wxNewId();
const long Dialog11::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Dialog11,wxDialog)
	//(*EventTable(Dialog11)
	//*)
END_EVENT_TABLE()

Dialog11::Dialog11(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Dialog11)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\asus\\Desktop\\res\\11.jpg")).Rescale(wxSize(541,418).GetWidth(),wxSize(541,418).GetHeight())), wxDefaultPosition, wxSize(541,418), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer1->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("                       ���¹㳡\n\nһ�����\n\n���¹㳡�����ڻ���ͼ���ǰ�������Ѿ���Ϊ�˻���\nѧ�ӷ������ֵĵط��������������Ծ���������\n�������Ա��������л���չʾ��������У԰������\n�ܶ�Ȥζ��\n\n����ְ��\n\n������ѧ���ճ����ɵĵط���"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(255,0,0));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

Dialog11::~Dialog11()
{
	//(*Destroy(Dialog11)
	//*)
}

