#include "imagebutton.h"

#include <QMouseEvent>
#include <QObject>
ImageButton::ImageButton(QWidget *parent):QPushButton(parent)
{
 //setFixedSize(62,60);
//        setFlat(true);
    
}

ImageButton::ImageButton(QWidget *parent, int cx, int cy, QString &strPath):QPushButton(parent)
{

}
/*
void ImageButton::mouseMoveEvent(QMouseEvent *e)
{
    QPushButton::mouseMoveEvent(e);
}

void ImageButton::mouseReleaseEvent(QMouseEvent *e)
{
    QPushButton::mouseReleaseEvent(e);

}
*/
void ImageButton::enterEvent(QEvent *event)
{
    setText(tr("niubi"));
    QPushButton::enterEvent(event);
}

void ImageButton::leaveEvent(QEvent *event)
{
    setText(tr("tian"));
    QPushButton::leaveEvent(event);
}




