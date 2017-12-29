#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Frame/framelesswindow.h"
class SysSettingDlg;
class TestDialog;
class CStatusGrid;





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

    CStatusGrid *m_StatusGrid;       //底层状态栏里面的表格


//事件
protected:


private:
    void InitFrame();        //初始化框架
    void tabInit();
    void tabMenuInit();     //二级菜单控件初始化
    void tabCurveInit();        //画曲线Tab初始化
    void tabGridInit();     //表格控件初始化
    void StatusInit();      //最底层状态栏初始化

public slots:
   void OnSysSettingClicked();          //实验参数按键
   void OnWorkTestClicked();            //工作测试按键
   void OnDataQueryClicked();           //数据查询按键
   void myShowMin();                      //点击最小化按键
   void myShowMaxMin();                   //放大缩小的按键

};

#endif // MAINWINDOW_H
