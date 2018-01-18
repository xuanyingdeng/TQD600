#include <QPoint>
#include <QLabel>
#include <QTableWidget>
#include <QShowEvent>
#include <QSystemTrayIcon>
#include <QMainWindow>
#include <QScrollBar>
#include <StatusGrid/cstatusgrid.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "syssettingdlg.h"
#include "testdialog.h"


MainWindow::MainWindow(QWidget *parent) :
     CFramelessWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnSysStting, SIGNAL(clicked()),this, SLOT(OnSysSettingClicked()));
    connect(ui->btnWorkTest, SIGNAL(clicked()),this, SLOT(OnWorkTestClicked()));
    connect(ui->btnDataQuery, SIGNAL(clicked()),this, SLOT(OnDataQueryClicked()));

    connect(ui->btnMinimum, SIGNAL(clicked()),this, SLOT(myShowMin()));
    connect(ui->btnMaxMin, SIGNAL(clicked()),this, SLOT(myShowMaxMin()));

    InitFrame();




}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::InitFrame()
{
//  setWindowFlags(Qt::FramelessWindowHint);//无边框

//这里是设置外边框能够响应放大缩小的区域
    setResizeableAreaWidth(4);
   //x 设置标题栏(能够双击放大)
    setTitleBar(ui->widgetTitlebar);

    //tab 控件的初始化
    tabInit();
    //状态网格
    StatusInit();



    //最大化
    showMaximized();
//    ui->tabCurve->setFixedHeight(0);
    //隐藏曲线界面
    ui->tabCurve->setHidden(true);

}

void MainWindow::tabInit()
{

    tabMenuInit();
    tabGridInit();
    tabCurveInit();
}

void MainWindow::tabMenuInit()
{
    ui->tabMenu->init();
    //隐藏tab按钮的控件，在界面中间实现了
    ui->tabMenu->tabBar()->hide();

}

void MainWindow::tabCurveInit()
{
     ui->tabCurve->tabBar()->hide();

}

void MainWindow::tabGridInit()
{
    ui->tabGrid->tabBar()->hide();
}

void MainWindow::StatusInit()
{
    m_StatusGrid = new CStatusGrid(2,5,ui->statusWidget);


//    m_StatusGrid->setRowCount(2);     //设置行数为2
//    m_StatusGrid->setColumnCount(5);   //设置列数为5
//    m_StatusGrid->setWindowTitle("QTableWidget & Item");
 //    m_StatusGrid->resize(350, 200);  //设置表格

    //   QStringList header;
  //   header<<"Month"<<"Description";
 //    tableWidget->setHorizontalHeaderLabels(header);
     m_StatusGrid->verticalHeader()->setVisible(false);   //隐藏列表头
     m_StatusGrid->horizontalHeader()->setVisible(false); //隐藏行表头

     m_StatusGrid->setSelectionMode(QAbstractItemView::NoSelection);
     m_StatusGrid->setSelectionBehavior(QAbstractItemView::SelectRows);
     m_StatusGrid->setEditTriggers(QTableWidget::NoEditTriggers);//不能编辑
     //背景透明
     m_StatusGrid->setStyleSheet("background-color:rgba(0,0,0,0)");

     //m_StatusGrid->setAttribute(Qt::WA_TranslucentBackground, true);
     m_StatusGrid->setItem(0,0,new QTableWidgetItem("Jan"));
     m_StatusGrid->setItem(1,0,new QTableWidgetItem("Feb"));
     m_StatusGrid->setItem(2,0,new QTableWidgetItem("Mar"));
     m_StatusGrid->setItem(0,1,new QTableWidgetItem(QIcon("images/IED.png"), "Jan's month"));
     m_StatusGrid->setItem(1,1,new QTableWidgetItem(QIcon("images/IED.png"), "Feb's month"));
     m_StatusGrid->setItem(2,1,new QTableWidgetItem(QIcon("images/IED.png"), "Mar's month"));


  //   tableWidget->horizontalScrollBar()->setEnabled(false);
  //   tableWidget->verticalScrollBar()->setEnabled(false);
     m_StatusGrid->horizontalScrollBar()->hide();
     m_StatusGrid->verticalScrollBar()->hide();
 //    tableWidget->move(100,200);
     m_StatusGrid->setGeometry(0,0,10000,200);

     //设置控件高（固定高）
     int istatusHeight = 0;
     istatusHeight = 25;//(ui->statusWidget->height());
     ui->statusWidget->setFixedHeight(istatusHeight << 1);
     m_StatusGrid->setFixedHeight(istatusHeight << 1);
     m_StatusGrid->setRowHeight(0,istatusHeight-2);
     m_StatusGrid->setRowHeight(1,istatusHeight-2);
//    m_StatusGrid->setBackgroundRole(QPalette::NoRole);
     //行宽
    m_StatusGrid->setColumnWidth(4,4000);


}



void MainWindow::OnSysSettingClicked()
{
    ui->tabMenu->setCurrentIndex(0);
}

void MainWindow::OnWorkTestClicked()
{
    ui->tabMenu->setCurrentIndex(1);
}

void MainWindow::OnDataQueryClicked()
{
   ui->tabMenu->setCurrentIndex(2);
//    ui->tabCurve->setHidden(false);


}

void MainWindow::myShowMin()
{
    showMinimized();
}

void MainWindow::myShowMaxMin()
{
    static bool bMaxshow = false;
    if(bMaxshow)
    {
        showNormal();
    }else
    {
        showMaximized();
    }
    bMaxshow = !bMaxshow;
}
