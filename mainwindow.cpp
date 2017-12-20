#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "syssettingdlg.h"
#include "testdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);//无边框
    m_sysSetting = NULL;
    m_TestDlg = NULL;
    //tab 控件的初始化
    tabInit();




    connect(ui->btnSysStting, SIGNAL(clicked()),this, SLOT(OnSysSettingClicked()));


 //   ui->verticalTab->setSpacing(0);     //设置间距
 //   QIcon iconWin("mainWndICON");
 //   iconWin.addFile("/Icon/DNX.ico");
 //   setWindowIcon(iconWin);



//    setAttribute(Qt::WA_TranslucentBackground);//背景透明
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

void MainWindow::OnSysSettingClicked()
{
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


    ui->tabMenu->setCurrentIndex(bbt);



}