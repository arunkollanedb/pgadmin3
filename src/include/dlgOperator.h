//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
// Copyright (C) 2002 - 2003, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
// dlgOperator.h - Operator property 
//
//////////////////////////////////////////////////////////////////////////


#ifndef __DLG_OPERATORPROP
#define __DLG_OPERATORPROP

#include "dlgProperty.h"

class pgSchema;
class pgOperator;

class dlgOperator : public dlgTypeProperty
{
public:
    dlgOperator(frmMain *frame, pgOperator *op, pgSchema *sch);
    int Go(bool modal);

    wxString GetSql();
    pgObject *CreateObject(pgCollection *collection);
    pgObject *GetObject();

private:
    void OnChange(wxNotifyEvent &ev);
    void OnChangeType(wxNotifyEvent &ev);
    void OnChangeJoin(wxNotifyEvent &ev);

    pgSchema *schema;
    pgOperator *oper;
    wxArrayString procedures;

    DECLARE_EVENT_TABLE();
};


#endif
