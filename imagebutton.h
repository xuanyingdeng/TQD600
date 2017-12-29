#ifndef IMAGEBUTTON_H
#define IMAGEBUTTON_H

#include <QPushButton>
class ImageButton : public QPushButton
{
    Q_OBJECT
public:
    ImageButton(QWidget *parent = NULL);

protected:
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void focusInEvent(QFocusEvent *e);
    void focusOutEvent(QFocusEvent *e);

};

#endif // IMAGEBUTTON_H
