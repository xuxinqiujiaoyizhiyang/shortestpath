/***************************************************************
 * Name:      shortestpathMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    liuyang (981872372@qq.com)
 * Created:   2018-12-01
 * Copyright: liuyang ()
 * License:
 **************************************************************/
#include "shortestpathMain.h"
#include"Dialog2.h"
#include"Dialog2.h"
#include"Dialog3.h"
#include"Dialog4.h"
#include"Dialog5.h"
#include"Dialog6.h"
#include"Dialog7.h"
#include"Dialog8.h"
#include"Dialog9.h"
#include"Dialog10.h"
#include"Dialog11.h"
#include"Dialog12.h"
#include"Dialog13.h"
#include"Dialog14.h"
#include"Dialog15.h"
#include"Dialog16.h"
#include"Dialog17.h"
#include"Dialog18.h"
#include"wx/splash.h"
#include"outDialog.h"
#include<wx/choice.h>
#include<stdlib.h>
#include<wx/wfstream.h>
#include <stdio.h>
#include<limits.h>
#include <wx/msgdlg.h>
#include <wx/gifdecod.h>
#include<string>
#include <iostream>
#define Infinity INT_MAX
#define max_vertex_num 20
#define OK 1
#define ERROR 1
#define TRUE 1
#define FALSE 0
using namespace std;
typedef char *vertex;
typedef enum{DG,DN,UDG,UDN} Graphkind;
typedef struct ArcCell
{
int adj;
char *info;
}ArcCell,AdjMatrix[max_vertex_num][max_vertex_num];
typedef struct{
    vertex vexs[max_vertex_num];
    AdjMatrix arcs;
    int vexnum,arcnum;
    Graphkind kind;
    int *visited;
}MGraph;
//(*InternalHeaders(shortestpathDialog)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(shortestpathDialog)
const long shortestpathDialog::ID_STATICBITMAP1 = wxNewId();
const long shortestpathDialog::ID_STATICTEXT1 = wxNewId();
const long shortestpathDialog::ID_CHOICE1 = wxNewId();
const long shortestpathDialog::ID_STATICLINE1 = wxNewId();
const long shortestpathDialog::ID_STATICTEXT2 = wxNewId();
const long shortestpathDialog::ID_CHOICE2 = wxNewId();
const long shortestpathDialog::ID_TOGGLEBUTTON1 = wxNewId();
const long shortestpathDialog::ID_STATICTEXT3 = wxNewId();
const long shortestpathDialog::ID_CHOICE3 = wxNewId();
const long shortestpathDialog::ID_BUTTON1 = wxNewId();
const long shortestpathDialog::ID_STATICTEXT4 = wxNewId();
const long shortestpathDialog::ID_CONTEXTHELPBUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(shortestpathDialog,wxDialog)
    //(*EventTable(shortestpathDialog)
    //*)
END_EVENT_TABLE()

shortestpathDialog::shortestpathDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(shortestpathDialog)
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer7;
    wxStaticBoxSizer* StaticBoxSizer1;

    Create(parent, wxID_ANY, _("wxWidgets app"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(1077,815));
    Hide();
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INFOBK));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("Tour guide map of north campus of BUCT"));
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\asus\\Desktop\\res\\map3.jpg")).Rescale(wxSize(700,805).GetWidth(),wxSize(700,805).GetHeight())), wxDefaultPosition, wxSize(700,805), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
    StaticBoxSizer1->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("               Start point:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(255,0,0));
    BoxSizer3->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Choice1 = new wxChoice(this, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    Choice1->Append(_("library"));
    Choice1->Append(_("The main building"));
    Choice1->Append(_("Dining hall"));
    Choice1->Append(_("Dormitory"));
    Choice1->Append(_("Gymnasium"));
    Choice1->Append(_("Stadium"));
    Choice1->Append(_("School history museum"));
    Choice1->Append(_("laboratory"));
    Choice1->Append(_("Mingde square"));
    Choice1->Append(_("Expert apartment"));
    Choice1->Append(_("Public laboratory building"));
    Choice1->Append(_("SouthGate"));
    Choice1->Append(_("EastGate"));
    Choice1->Append(_("Jade pingshan"));
    Choice1->Append(_("Teaching service center"));
    Choice1->Append(_("Engineering training centre"));
    Choice1->Append(_("clinic"));
    BoxSizer3->Add(Choice1, 1, wxALL, 5);
    BoxSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
    BoxSizer2->Add(StaticLine1, 0, wxALL|wxEXPAND, 4);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("               Destination:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(255,0,0));
    BoxSizer4->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    Choice2 = new wxChoice(this, ID_CHOICE2, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
    Choice2->Append(_("library"));
    Choice2->Append(_("The main building"));
    Choice2->Append(_("Dining hall"));
    Choice2->Append(_("Dormitory"));
    Choice2->Append(_("Gymnasium"));
    Choice2->Append(_("Stadium"));
    Choice2->Append(_("School history museum"));
    Choice2->Append(_("laboratory"));
    Choice2->Append(_("Mingde square"));
    Choice2->Append(_("Expert apartment"));
    Choice2->Append(_("Public laboratory building"));
    Choice2->Append(_("SouthGate"));
    Choice2->Append(_("EastGate"));
    Choice2->Append(_("Jade pingshan"));
    Choice2->Append(_("Teaching service center"));
    Choice2->Append(_("Engineering training centre"));
    Choice2->Append(_("clinic"));
    BoxSizer4->Add(Choice2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    ToggleButton1 = new wxToggleButton(this, ID_TOGGLEBUTTON1, _("Start navigation"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON1"));
    ToggleButton1->SetForegroundColour(wxColour(0,0,255));
    BoxSizer5->Add(ToggleButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Query scenic spot name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText3->SetForegroundColour(wxColour(255,0,0));
    BoxSizer6->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Choice3 = new wxChoice(this, ID_CHOICE3, wxDefaultPosition, wxSize(181,22), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
    Choice3->Append(_("library"));
    Choice3->Append(_("The main building"));
    Choice3->Append(_("Dining hall"));
    Choice3->Append(_("Dormitory"));
    Choice3->Append(_("Gymnasium"));
    Choice3->Append(_("Stadium"));
    Choice3->Append(_("School history museum"));
    Choice3->Append(_("laboratory"));
    Choice3->Append(_("Mingde square"));
    Choice3->Append(_("Expert apartment"));
    Choice3->Append(_("Public laboratory building"));
    Choice3->Append(_("SouthGate"));
    Choice3->Append(_("EastGate"));
    Choice3->Append(_("Jade pingshan"));
    Choice3->Append(_("Teaching service center"));
    Choice3->Append(_("Engineering training centre"));
    Choice3->Append(_("clinic"));
    BoxSizer6->Add(Choice3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(this, ID_BUTTON1, _("Query"), wxDefaultPosition, wxSize(75,21), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetForegroundColour(wxColour(0,0,255));
    BoxSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Enjoy your stay!"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText4->SetForegroundColour(wxColour(0,255,64));
    BoxSizer2->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    ContextHelpButton1 = new wxContextHelpButton(this, wxID_CONTEXT_HELP, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW);
    BoxSizer7->Add(ContextHelpButton1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer7, 1, wxALL|wxALIGN_RIGHT, 5);
    StaticBoxSizer1->Add(BoxSizer2, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
    BoxSizer1->Add(StaticBoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    SetSizer(BoxSizer1);
    SetSizer(BoxSizer1);
    Layout();

    Connect(ID_TOGGLEBUTTON1,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&shortestpathDialog::OnToggleButton1Toggle1);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&shortestpathDialog::OnButton1Click2);
    //*)
}
shortestpathDialog::~shortestpathDialog()
{
    //(*Destroy(shortestpathDialog)
    //*)
}
void CreateUDN(MGraph &G)//有向网
{

    G.vexnum=17;
    G.vexs[0]="library";
    G.vexs[1]="The main building";
    G.vexs[2]="Dining hall";
    G.vexs[3]="Dormitory";
    G.vexs[4]="Gymnasium";
    G.vexs[5]="Stadium";
    G.vexs[6]="School history museum";
    G.vexs[7]="laboratory";
    G.vexs[8]="Mingde square";
    G.vexs[9]="Expert apartment";
    G.vexs[10]="Public laboratory building";
    G.vexs[11]="SouthGate";
    G.vexs[12]="EastGate";
    G.vexs[13]="Jade pingshan";
    G.vexs[14]="Teaching service center";
    G.vexs[15]="Engineering training centre";
    G.vexs[16]="clinic";

    for(int i=0;i<G.vexnum;i++)
        for(int j=0;j<G.vexnum;j++)
    {
        G.arcs[i][j].adj=INT_MAX;
    }

    G.arcs[0][6].adj=260;
    G.arcs[0][7].adj=330;
    G.arcs[0][8].adj=50;
    G.arcs[0][9].adj=900;
    G.arcs[0][12].adj=330;
    G.arcs[0][13].adj=900;
    G.arcs[0][14].adj=420;
    G.arcs[0][15].adj=330;
    G.arcs[1][3].adj=250;
    G.arcs[1][4].adj=100;
    G.arcs[1][5].adj=250;
    G.arcs[1][7].adj=90;
    G.arcs[1][10].adj=100;
    G.arcs[2][3].adj=70;
    G.arcs[2][6].adj=40;
    G.arcs[2][9].adj=500;
    G.arcs[2][14].adj=430;
    G.arcs[2][15].adj=600;
    G.arcs[2][16].adj=50;
    G.arcs[3][1].adj=250;
    G.arcs[3][2].adj=70;
    G.arcs[3][5].adj=50;
    G.arcs[3][16].adj=30;
    G.arcs[4][1].adj=100;
    G.arcs[4][10].adj=70;
    G.arcs[4][11].adj=100;
    G.arcs[5][1].adj=250;
    G.arcs[5][3].adj=50;
    G.arcs[6][0].adj=260;
    G.arcs[6][2].adj=40;
    G.arcs[6][8].adj=230;
    G.arcs[6][9].adj=490;
    G.arcs[6][14].adj=420;
    G.arcs[6][15].adj=500;
    G.arcs[6][16].adj=60;
    G.arcs[7][0].adj=330;
    G.arcs[7][1].adj=90;
    G.arcs[7][8].adj=290;
    G.arcs[7][9].adj=1200;
    G.arcs[7][12].adj=300;
    G.arcs[7][15].adj=400;
    G.arcs[8][0].adj=50;
    G.arcs[8][6].adj=230;
    G.arcs[8][7].adj=290;
    G.arcs[8][12].adj=300;
    G.arcs[9][0].adj=900;
    G.arcs[9][2].adj=500;
    G.arcs[9][6].adj=490;
    G.arcs[9][7].adj=1200;
    G.arcs[9][13].adj=100;
    G.arcs[9][14].adj=50;
    G.arcs[9][15].adj=800;
    G.arcs[10][1].adj=100;
    G.arcs[10][4].adj=70;
    G.arcs[10][11].adj=100;
    G.arcs[11][4].adj=100;
    G.arcs[11][10].adj=100;
    G.arcs[12][0].adj=330;
    G.arcs[12][7].adj=300;
    G.arcs[12][8].adj=300;
    G.arcs[12][15].adj=600;
    G.arcs[13][0].adj=900;
    G.arcs[13][9].adj=100;
    G.arcs[13][15].adj=400;
    G.arcs[14][0].adj=420;
    G.arcs[14][2].adj=430;
    G.arcs[14][6].adj=420;
    G.arcs[14][9].adj=50;
    G.arcs[15][0].adj=330;
    G.arcs[15][2].adj=600;
    G.arcs[15][6].adj=500;
    G.arcs[15][7].adj=400;
    G.arcs[15][9].adj=800;
    G.arcs[15][12].adj=600;
    G.arcs[15][13].adj=400;
    G.arcs[16][2].adj=50;
    G.arcs[16][3].adj=30;
    G.arcs[16][6].adj=60;

}
void dijkstra(MGraph G, int vs, int prev[], int dist[],int m)
{
    int i,j,k;
    int min;
    int tmp;
    int flag[G.vexnum];

    for (i = 0; i < G.vexnum; i++)
    {
        flag[i] = 0;
        prev[i] = vs;
        dist[i] = G.arcs[vs][i].adj;
    }

    flag[vs] = 1;
    dist[vs] = 0;
    for (i = 1; i < G.vexnum; i++)
    {
        min =INT_MAX;
        for (j = 0; j < G.vexnum; j++)
        {
            if (flag[j]==0 && dist[j]<min)
            {
                min = dist[j];
                k = j;
            }
        }
        flag[k] = 1;
        for (j = 0; j < G.vexnum; j++)
        {
            if(G.arcs[k][j].adj==INT_MAX)
                tmp=INT_MAX;
            else
                tmp=min+G.arcs[k][j].adj;
            if (flag[j] == 0 && (tmp  < dist[j]) )
            {
                dist[j] = tmp;
                prev[j] = k;

            }
        }
    }
}
string ShowPath(MGraph G,int n,int v,int u,int *dist,int *prev)
{
 int j = 0;
 int w = u;
 int count = 0;
 int *way ;
string  all="";
 way=(int *)malloc(sizeof(int)*1000);
 way[count]=v;
 while (w != v)
 {
  count++;
  way[count] = prev[w];
  w = prev[w];
 }
 for (j = count; j >= 1; j--)
 {
  all+=G.vexs[way[j]];
  all+="->";
 }
 all+=G.vexs[u];
 return all;
}

void shortestpathDialog::OnToggleButton1Toggle1(wxCommandEvent& event)
{
    outDialog dialog(this);
    int startpoint=-1;
    int end=-1;
    MGraph G;
    int *dist;
    int *prev;
    dist = (int *)malloc(sizeof(int)*100);
    prev = (int *)malloc(sizeof(int)*100);

    wxString res=wxT("");
    wxString re=wxT("");

    startpoint=Choice1->GetSelection();
    end=Choice2->GetSelection();
    CreateUDN(G);
    if(end!=-1&&startpoint!=-1){
    dijkstra(G, startpoint, prev, dist,end);
    res<<dist[end];
    dialog.StaticText4->SetLabel(res);
    }
     if(end!=-1&&startpoint!=-1){
    re<<ShowPath(G,G.vexnum,startpoint,end,dist,prev);
    dialog.StaticText3->SetLabel(re);
    dialog.ShowModal();
     }
}
void shortestpathDialog::OnButton1Click2(wxCommandEvent& event)
{
    int point;
    point=Choice3->GetSelection();
    switch(point){
    case 0:
            {
                Dialog2 dialog(this);
                dialog.ShowModal();
                break;
            }
    case 1:
            {
                Dialog3 dialog(this);
                dialog.ShowModal();
                break;
            }
    case 2:
            {
                Dialog6 dialog(this);
                dialog.ShowModal();
                break;
            }
    case 3:
            {
                Dialog4 dialog(this);
                dialog.ShowModal();
                break;
            }
    case 4:
            {
                Dialog9 dialog(this);
                dialog.ShowModal();
                break;
            }
    case 5:
            {
                Dialog7 dialog(this);
                dialog.ShowModal();
                break;
            }
    case 6:
            {
                Dialog10 dialog(this);
                dialog.ShowModal();
                break;
            }
    case 7:
            {
                Dialog8 dialog(this);
                dialog.ShowModal();
                break;
            }
    case 8:
            {
                Dialog11 dialog(this);
                dialog.ShowModal();
                break;
            }
    case 9:
            {
                Dialog12 dialog(this);
                dialog.ShowModal();
                break;
            }
   case 10:
            {
                Dialog13 dialog(this);
                dialog.ShowModal();
                break;
            }
   case 11:
            {
                Dialog5 dialog(this);
                dialog.ShowModal();
                break;
            }
   case 12:
            {
                Dialog14 dialog(this);
                dialog.ShowModal();
                break;
            }
   case 13:
            {
                Dialog15 dialog(this);
                dialog.ShowModal();
                break;
            }
   case 14:
            {
                Dialog16 dialog(this);
                dialog.ShowModal();
                break;
            }
   case 15:
            {
                Dialog17 dialog(this);
                dialog.ShowModal();
                break;
            }
   case 16:
            {
                Dialog18 dialog(this);
                dialog.ShowModal();
                break;
            }
    }
}
