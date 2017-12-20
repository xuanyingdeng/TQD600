#include "logindialog.h"
#include "ui_logindialog.h"
#include <QString>
#include <QMessageBox>
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);//无边框
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::OnBtnLogin()
{
    QString strPsw(""),strUser("");
    strUser = ui->editUser->text().trimmed();
    strPsw  = ui->editPwd->text().trimmed();

    if("" == strUser)
    {
        accept();
    }else{
        if(strUser == tr("123") && tr("123456") == strPsw)
        {
             accept();
        }else{
             QMessageBox::warning(this,tr("警告！"),tr("\n用户名或密码错误！\n"),QMessageBox::Yes);
        }
    }
}
