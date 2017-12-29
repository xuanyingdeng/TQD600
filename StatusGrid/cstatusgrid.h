#ifndef CSTATUSGRID_H
#define CSTATUSGRID_H
#include <QTableWidget>

class CStatusGrid : public QTableWidget
{
    Q_OBJECT
public:
    CStatusGrid(QWidget *parent = NULL);
    CStatusGrid(int rows, int columns,QWidget *parent = NULL);
protected:
   void  mousePressEvent(QMouseEvent *e);

private:

};

#endif // CSTATUSGRID_H
