#include "outDialog.h"

//(*InternalHeaders(outDialog)
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(outDialog)
const long outDialog::ID_STATICTEXT1 = wxNewId();
const long outDialog::ID_STATICTEXT4 = wxNewId();
const long outDialog::ID_STATICTEXT2 = wxNewId();
const long outDialog::ID_STATICTEXT3 = wxNewId();
//*)

BEGIN_EVENT_TABLE(outDialog,wxDialog)
	//(*EventTable(outDialog)
	//*)
END_EVENT_TABLE()

outDialog::outDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(outDialog)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxGridSizer* GridSizer1;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(620,118));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOBK));
	GridSizer1 = new wxGridSizer(0, 1, 0, 0);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("            最短路线长度（米）："), wxDefaultPosition, wxSize(207,27), 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxColour(255,0,0));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Label"), wxDefaultPosition, wxSize(318,31), 0, _T("ID_STATICTEXT4"));
	BoxSizer1->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("            最短路径显示："), wxDefaultPosition, wxSize(195,14), 0, _T("ID_STATICTEXT2"));
	StaticText2->SetForegroundColour(wxColour(255,0,0));
	BoxSizer2->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Label"), wxDefaultPosition, wxSize(313,49), 0, _T("ID_STATICTEXT3"));
	BoxSizer2->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(GridSizer1);
	SetSizer(GridSizer1);
	Layout();

	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&outDialog::OnInit);
	//*)
}

outDialog::~outDialog()
{
	//(*Destroy(outDialog)
	//*)
}


void outDialog::OnPanel1Paint(wxPaintEvent& event)
{
}

void outDialog::OnInit(wxInitDialogEvent& event)
{
}
