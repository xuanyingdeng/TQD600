#include "tabmenucontrol.h"
#include "syssettingdlg.h"
#include "testdialog.h"
#include "dataquerydlg.h"
TabMenuControl::TabMenuControl(QWidget *parent):QTabWidget(parent)
{
    m_SelDlg[0] = new SysSettingDlg(this);
    m_SelDlg[1] = new TestDialog(this);
    m_SelDlg[2] = new DataQueryDlg(this);
/*
    m_SysSetDlg = m_SelDlg[0];
    m_TestDlg = m_SelDlg[1];
    m_DataQueryDly = m_SelDlg[2];
*/
}

void TabMenuControl::init()
{
//   this->tabBar()->hide();

    clear();
    insertTab(0,m_SelDlg[0],tr("sysSetting"));
    insertTab(1,m_SelDlg[1],tr("wordTest"));
    insertTab(2,m_SelDlg[2],tr("dataQuery"));
    setCurrentIndex(0);
}
