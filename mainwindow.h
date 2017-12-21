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


//事件
protected:
    void resizeEvent();
    void mousePressEvent(QMouseEvent *e);     //鼠标点击
    void mouseMoveEvent(QMouseEvent *e);       //鼠标移动
    void mouseReleaseEvent(QMouseEvent *e);

private:
    void tabInit();
    void tabMenuInit();     //二级菜单控件初始化
    void tabCurveInit();        //画曲线Tab初始化
    void tabGridInit();     //表格控件初始化

     void region(const QPoint &cursorPoint);

public slots:
   void OnSysSettingClicked();          //实验参数按键
   void OnWorkTestClicked();            //工作测试按键
   void OnDataQueryClicked();           //数据查询按键


};

#endif // MAINWINDOW_H
