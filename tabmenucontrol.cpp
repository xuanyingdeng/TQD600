#include "tabmenucontrol.h"
#include "syssettingdlg.h"
#include "testdialog.h"
#include "dataquerydlg.h"
TabMenuControl::TabMenuControl(QWidget *parent):QTabWidget(parent)
{
   m_SysSetDlg = new SysSettingDlg(this);
   m_TestDlg = new TestDialog(this);
   m_DataQueryDly = new DataQueryDlg(this);
   m_SelDlg[0] = m_SysSetDlg;
   m_SelDlg[1] = m_TestDlg;
   m_SelDlg[2] = m_DataQueryDly;
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
