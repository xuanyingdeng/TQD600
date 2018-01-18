#ifndef TABMENUCONTROL_H
#define TABMENUCONTROL_H
#include <QTabWidget>
#include <QDialog>
class SysSettingDlg;
class DataQueryDlg;
class TestDialog;
class TabMenuControl : public QTabWidget
{
    Q_OBJECT
public:
    TabMenuControl(QWidget *parent);

private:
    QDialog* m_SelDlg[3];

    SysSettingDlg *m_SysSetDlg;
    TestDialog    *m_TestDlg;
    DataQueryDlg  *m_DataQueryDly;

public:
    void init();

};

#endif // TABMENUCONTROL_H
