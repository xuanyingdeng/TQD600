#ifndef SYSSETTINGDLG_H
#define SYSSETTINGDLG_H

#include <QDialog>

namespace Ui {
class SysSettingDlg;
}

class SysSettingDlg : public QDialog
{
    Q_OBJECT

public:
    explicit SysSettingDlg(QWidget *parent = 0);
    ~SysSettingDlg();

private:
    Ui::SysSettingDlg *ui;
};

#endif // SYSSETTINGDLG_H
