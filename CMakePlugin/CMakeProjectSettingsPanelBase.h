//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CMAKEPROJECTSETTINGSPANEL_BASE_CLASSES_H
#define CMAKEPROJECTSETTINGSPANEL_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/filepicker.h>
#include <wx/combobox.h>
#include <wx/textctrl.h>

class CMakeProjectSettingsPanelBase : public wxPanel
{
protected:
    wxCheckBox* m_checkBoxEnable;
    wxStaticText* m_staticTextParent;
    wxChoice* m_choiceParent;
    wxStaticText* m_staticTextSourceDir;
    wxDirPickerCtrl* m_dirPickerSourceDir;
    wxStaticText* m_staticTextBuildDir;
    wxDirPickerCtrl* m_dirPickerBuildDir;
    wxStaticText* m_staticTextGenerator;
    wxChoice* m_choiceGenerator;
    wxStaticText* m_staticTextBuildType;
    wxComboBox* m_comboBoxBuildType;
    wxStaticText* m_staticTextArguments;
    wxTextCtrl* m_textCtrlArguments;

protected:
    virtual void OnCheck(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnCheck2(wxUpdateUIEvent& event) { event.Skip(); }

public:
    CMakeProjectSettingsPanelBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(400,300), long style = wxTAB_TRAVERSAL);
    virtual ~CMakeProjectSettingsPanelBase();
};

#endif