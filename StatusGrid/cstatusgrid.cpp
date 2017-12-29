#include "cstatusgrid.h"
#include <QEvent>
#include <QMouseEvent>
#include <QList>
#include <QDebug>
#include <QPalette>
CStatusGrid::CStatusGrid(QWidget *parent):QTableWidget(parent)
{

}

CStatusGrid::CStatusGrid(int rows, int columns, QWidget *parent)
    :QTableWidget(rows,columns,parent)
{
/*
    QPalette pal;//pal(m_pWidget->palette());
    QColor color(106, 189, 255);
    //设置背景黑色
    pal.setColor(QPalette::Background,color);
    this->setAutoFillBackground(true);
    this->setPalette(pal);
*/
}


void CStatusGrid::mousePressEvent(QMouseEvent *e)
{
 //   currentItem()->setText("NIYU");
     QTableWidget::mousePressEvent(e);
      qDebug() << 111 << "   " << currentRow() << "   "  << currentColumn();

      currentItem()->setText(tr("chengz"));
        return ;
}




