/***************************************************************
 * Name:      shortestpathMain.h
 * Purpose:   Defines Application Frame
 * Author:    liuyang (981872372@qq.com)
 * Created:   2018-12-01
 * Copyright: liuyang ()
 * License:
 **************************************************************/

#ifndef SHORTESTPATHMAIN_H
#define SHORTESTPATHMAIN_H

//(*Headers(shortestpathDialog)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/cshelp.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/tglbtn.h>
//*)

class shortestpathDialog: public wxDialog
{
    public:

        shortestpathDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~shortestpathDialog();

    private:

        //(*Handlers(shortestpathDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTextCtrl1TextEnter(wxCommandEvent& event);
        void OnToggleButton1Toggle(wxCommandEvent& event);
        void OnChoice1Select(wxCommandEvent& event);
        void OnChoice2Select(wxCommandEvent& event);
        void OnToggleButton1Toggle1(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton1Click1(wxCommandEvent& event);
        void OnButton1Click2(wxCommandEvent& event);
        void OnChoice3Select(wxCommandEvent& event);
        //*)

        //(*Identifiers(shortestpathDialog)
        static const long ID_STATICBITMAP1;
        static const long ID_STATICTEXT1;
        static const long ID_CHOICE1;
        static const long ID_STATICLINE1;
        static const long ID_STATICTEXT2;
        static const long ID_CHOICE2;
        static const long ID_TOGGLEBUTTON1;
        static const long ID_STATICTEXT3;
        static const long ID_CHOICE3;
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT4;
        static const long ID_CONTEXTHELPBUTTON1;
        //*)

        //(*Declarations(shortestpathDialog)
        wxBoxSizer* BoxSizer1;
        wxBoxSizer* BoxSizer2;
        wxButton* Button1;
        wxChoice* Choice1;
        wxChoice* Choice2;
        wxChoice* Choice3;
        wxContextHelpButton* ContextHelpButton1;
        wxStaticBitmap* StaticBitmap1;
        wxStaticLine* StaticLine1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxToggleButton* ToggleButton1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // SHORTESTPATHMAIN_H
