/**
 * @brief The DataQueryDlg class
 * 数据查询二级菜单项
 *
 */
#ifndef DATAQUERYDLG_H
#define DATAQUERYDLG_H

#include <QDialog>

namespace Ui {
class DataQueryDlg;
}

class DataQueryDlg : public QDialog
{
    Q_OBJECT

public:
    explicit DataQueryDlg(QWidget *parent = 0);
    ~DataQueryDlg();

private:
    Ui::DataQueryDlg *ui;
};

#endif // DATAQUERYDLG_H
