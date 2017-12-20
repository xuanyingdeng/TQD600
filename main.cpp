#include "mainwindow.h"
#include <QApplication>
#include "logindialog.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    //设置软件图标
    a.setWindowIcon(QIcon(":/Icon/mainWndICON"));
    MainWindow w;

    LoginDialog dlg;
    if(QDialog::Accepted == dlg.exec())
    {
        w.show();
        return a.exec();
    }
    return 0;
}
