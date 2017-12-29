#include "syssettingdlg.h"
#include "ui_syssettingdlg.h"

SysSettingDlg::SysSettingDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SysSettingDlg)
{
    ui->setupUi(this);

}

SysSettingDlg::~SysSettingDlg()
{
    delete ui;
}
