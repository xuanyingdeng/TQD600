#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Frame/framelesswindow.h"
class SysSettingDlg;
class TestDialog;
namespace Ui {
class MainWindow;
}

class MainWindow : public CFramelessWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

protected:
    void resizeEvent();


private:
    void tabInit();
    void tabMenuInit();      //二级菜单控件初始化
    void tabCurveInit();     //画曲线Tab初始化
    void tabGridInit();      //表格控件初始化
public slots:
   void OnSysSettingClicked();


};

#endif // MAINWINDOW_H
