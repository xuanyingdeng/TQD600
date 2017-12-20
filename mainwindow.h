#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class SysSettingDlg;
class TestDialog;






namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
public:
    //用来表示当前鼠标放的位置
    enum Direction{
        UP = 0,     //上
        DOWN=1,     //下
        LEFT,       //左
        RIGHT,      //右
        LEFTTOP,    //左上
        LEFTBOTTOM, //左下
        RIGHTBOTTOM,//右下
        RIGHTTOP,   //右上
        NONE        //无
    };
private:
    enum Direction m_CurrectDirection;   //用来标识当前鼠标方向


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
