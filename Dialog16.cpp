#include "Dialog16.h"

//(*InternalHeaders(Dialog16)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Dialog16)
const long Dialog16::ID_STATICBITMAP1 = wxNewId();
const long Dialog16::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Dialog16,wxDialog)
	//(*EventTable(Dialog16)
	//*)
END_EVENT_TABLE()

Dialog16::Dialog16(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Dialog16)
	wxBoxSizer* BoxSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\asus\\Desktop\\res\\14.jpg")).Rescale(wxSize(455,352).GetWidth(),wxSize(455,352).GetHeight())), wxDefaultPosition, wxSize(455,352), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer1->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("                       教学服务中心（在建）\n\n一、简介\n\n北京化工大学教学服务中心紧挨校体育馆，旨在\n为教师的教学问题以及化大学子的日常学习生活\n提供方便，\n\n二、职能\n\n为教学提供便利的服务。"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(255,0,0));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

Dialog16::~Dialog16()
{
	//(*Destroy(Dialog16)
	//*)
}

