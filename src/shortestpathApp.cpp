/***************************************************************
 * Name:      shortestpathApp.cpp
 * Purpose:   Code for Application Class
 * Author:    liuyang (981872372@qq.com)
 * Created:   2018-12-01
 * Copyright: liuyang ()
 * License:
 **************************************************************/

#include "shortestpathApp.h"

//(*AppHeaders
#include "shortestpathMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(shortestpathApp);

bool shortestpathApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	shortestpathDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
