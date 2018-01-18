#ifndef IMAGEBUTTON_H
#define IMAGEBUTTON_H

#include <QPushButton>
class ImageButton : public QPushButton
{
    Q_OBJECT
public:
    ImageButton(QWidget *parent = NULL);
    /**
     * @brief ImageButton
     * @param parent    父窗口
     * @param cx        宽
     * @param cy        高
     * @param strPath   图片路径
     */
    ImageButton(QWidget *parent,int cx,int cy,QString &strPath);
/************************************成员变量*************************************/
private:
    
/*******************************************************************************/    
protected:
/*
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
*/
     /**
     * @brief enterEvent    鼠标移进事件
     * @param event
     */
    void enterEvent(QEvent *event);
    /**
     * @brief leaveEvent    鼠标移出事件
     * @param event
     */
    void leaveEvent(QEvent *event);
/*
    void focusInEvent(QFocusEvent *e);
    void focusOutEvent(QFocusEvent *e);
*/
private:


};

#endif // IMAGEBUTTON_H
