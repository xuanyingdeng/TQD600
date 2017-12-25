#include <QPoint>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "syssettingdlg.h"
#include "testdialog.h"

#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    CFramelessWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



//    setWindowFlags(Qt::FramelessWindowHint);//无边框
    setResizeableAreaWidth(4);
    setTitleBar(ui->widgetTitlebar);

    //tab 控件的初始化
    tabInit();





    connect(ui->btnSysStting, SIGNAL(clicked()),this, SLOT(OnSysSettingClicked()));
    connect(ui->btnWorkTest, SIGNAL(clicked()),this, SLOT(OnWorkTestClicked()));
    connect(ui->btnDataQuery, SIGNAL(clicked()),this, SLOT(OnDataQueryClicked()));

    connect(ui->btnWorkTest, SIGNAL(clicked()),this, SLOT(OnWorkTestClicked()));
    connect(ui->btnDataQuery, SIGNAL(clicked()),this, SLOT(OnDataQueryClicked()));

 //   ui->verticalTab->setSpacing(0);     //设置间距
//    setAttribute(Qt::WA_TranslucentBackground);//背景透明
//在这里增加状态栏
#if  1
    QLabel *msgLabel;
    msgLabel = new QLabel(this);
    msgLabel->setMinimumSize(msgLabel->sizeHint());
    msgLabel->setAlignment(Qt::AlignHCenter);
    statusBar()->addWidget(msgLabel);
//    statusBar()->setStyleSheet(QString("QStatusBar::item{border:0px}"));//去掉label的边框.
    msgLabel->setText(tr("牛逼"));

    QLabel *msgLabel2;
    msgLabel2 = new QLabel(this);
    msgLabel2->setMinimumSize(msgLabel->sizeHint());
    msgLabel2->setAlignment(Qt::AlignHCenter);
    statusBar()->addWidget(msgLabel2);
//    statusBar()->setStyleSheet(QString("QStatusBar::item{border:0px}"));//去掉label的边框.
    msgLabel2->setText(tr("牛逼"));

    QLabel *msgLabel3;
    msgLabel3 = new QLabel(this);
    msgLabel3->setMinimumSize(msgLabel->sizeHint());
    msgLabel3->setAlignment(Qt::AlignHCenter);
    statusBar()->addWidget(msgLabel3);
//    statusBar()->setStyleSheet(QString("QStatusBar::item{border:0px}"));//去掉label的边框.
    msgLabel3->setText(tr("牛逼"));

#endif




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent()
{
    QSize szClient = ui->tabMenu->size();
 //    ui->tabMenu->setGeometry(0, 0, szClient.width(), szClient.height());
      QWidget *ptab = ui->tabMenu->currentWidget();
      if (ptab != nullptr)
          ptab->setGeometry(0, 0, szClient.width(), szClient.height());
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{

}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{

}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{

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
    ui->tabMenu->tabBar()->hide();
/*
     ui->tabMenu->tabBar()->hide();
     if(NULL == m_sysSetting)
        m_sysSetting = new SysSettingDlg(ui->tabMenu);
     if(NULL == m_TestDlg)
        m_TestDlg    = new TestDialog(ui->tabMenu);
     ui->tabMenu->clear();
     ui->tabMenu->insertTab(0,m_sysSetting,tr("sysSetting"));
     ui->tabMenu->insertTab(1,m_TestDlg,tr("wordTest"));
     ui->tabMenu->setCurrentIndex(0);
*/

}

void MainWindow::tabCurveInit()
{
     ui->tabCurve->tabBar()->hide();

}

void MainWindow::tabGridInit()
{
    ui->tabGrid->tabBar()->hide();
}

void MainWindow::region(const QPoint &cursorPoint)
{

}

void MainWindow::OnSysSettingClicked()
{
/*
    static int bbt = 0;
    bbt++;
    switch (bbt) {
    case 0:
//        ui->tabMenu->setCurrentIndex(0);
        break;
    case 1:
        break;
    case 2:
        break;

    default:
        bbt = 0;
        break;
    }

    ui->tabMenu->setCurrentIndex(bbt

    ui->tabMenu->setCurrentIndex(bbt)
*/
    ui->tabMenu->setCurrentIndex(0);



}

void MainWindow::OnWorkTestClicked()
{
    ui->tabMenu->setCurrentIndex(1);
}

void MainWindow::OnDataQueryClicked()
{
   ui->tabMenu->setCurrentIndex(2);
}
