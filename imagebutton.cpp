#include "imagebutton.h"

#include <QMouseEvent>

ImageButton::ImageButton(QWidget *parent):QPushButton(parent)
{
        setMouseTracking(true);
        setFlat(true);
}

void ImageButton::mouseMoveEvent(QMouseEvent *e)
{
    if(e->pos().x() < 10 || e->pos().y() < 10)
    {
        setText("tianxia");
        return ;
    }
    QPushButton::mouseMoveEvent(e);

}

void ImageButton::mouseReleaseEvent(QMouseEvent *e)
{
    QPushButton::mouseReleaseEvent(e);
    setText("nihao");
}

void ImageButton::focusInEvent(QFocusEvent *e)
{

}

void ImageButton::focusOutEvent(QFocusEvent *e)
{

}

