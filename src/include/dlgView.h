//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
// Copyright (C) 2002 - 2003, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
// dlgView.h - View property 
//
//////////////////////////////////////////////////////////////////////////


#ifndef __DLG_VIEWPROP
#define __DLG_VIEWPROP

#include "dlgProperty.h"

class pgSchema;
class pgView;
class ctlSQLBox;

class dlgView : public dlgSecurityProperty
{
public:
    dlgView(frmMain *frame, pgView *v, pgSchema *sch);
    int Go(bool modal);

    wxString GetSql();
    pgObject *CreateObject(pgCollection *collection);
    pgObject *GetObject();

private:
    pgSchema *schema;
    pgView *view;
    wxString oldDefinition;

    void OnChange(wxNotifyEvent &ev);

    ctlSQLBox *sqlBox;

    DECLARE_EVENT_TABLE();
};


#endif
