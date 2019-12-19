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
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("                            图书馆 \n\n一、简介\n\n化大图书馆自建馆以来，坚持突出以本校学科所需\n文献为特色，以化学化工为重点，采集其经典文献\n和检索工具书，同时注重经管、文法、信息学科的\n文献收藏，现已初步形成了以化学化工为重点，兼\n收经管、文法、信息等综合学科的馆藏文献体系，\n是收藏化学化工文献资料最多、最全的高校图书馆。\n\n二、职能\n\n学生借阅图书以及自习的地方，导员办公室所在地"), wxDefaultPosition, wxSize(485,260), 0, _T("ID_STATICTEXT1"));
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

