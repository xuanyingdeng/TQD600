#ifndef CUSTOMDELEGATE_H
#define CUSTOMDELEGATE_H

#include <QStyledItemDelegate>

class QWidget;
class CustomDelegate : public QStyledItemDelegate
{
    Q_OBJECT

public:
    explicit CustomDelegate(QObject *parent = 0);
//创建编辑器
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;
//Set编辑器的数据
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
//将数据写入模型
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;
//更新编辑器的集合布局
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const;
/*x 这里是原先的数据处理现在将他们屏蔽掉
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

    bool editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index);

    QRect checkBoxRect(const QStyleOptionViewItem& viewItemStyleOptions) const;
*/
};

#endif // CUSTOMDELEGATE_H
