#include "Dialog10.h"

//(*InternalHeaders(Dialog10)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Dialog10)
const long Dialog10::ID_STATICBITMAP1 = wxNewId();
const long Dialog10::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Dialog10,wxDialog)
	//(*EventTable(Dialog10)
	//*)
END_EVENT_TABLE()

Dialog10::Dialog10(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Dialog10)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\asus\\Desktop\\res\\14.jpg")).Rescale(wxSize(468,352).GetWidth(),wxSize(468,352).GetHeight())), wxDefaultPosition, wxSize(468,352), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer1->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("                      Уʷ�ݣ��ڽ���\n\nְ��\n\n���������չ����У�����ĸ��ֳɹ���ʹ����ѧ\n�Ӹ����˽⻯�����ʷ��ɾͣ�ͬʱ�����ι�\n��Ա�����˽⻯��ĻԻ���ʷ��\n\n"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(255,0,0));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

Dialog10::~Dialog10()
{
	//(*Destroy(Dialog10)
	//*)
}

