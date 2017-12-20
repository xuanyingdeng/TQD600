#include "dataquerydlg.h"
#include "ui_dataquerydlg.h"

DataQueryDlg::DataQueryDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataQueryDlg)
{
    ui->setupUi(this);
}

DataQueryDlg::~DataQueryDlg()
{
    delete ui;
}
