#ifndef DELETE_PATH_H
#define DELETE_PATH_H

#include <QMainWindow>

namespace Ui {
class Delete_path;
}

class Delete_path : public QMainWindow
{
    Q_OBJECT

public:
    explicit Delete_path(QWidget *parent = nullptr);
    ~Delete_path();
    //重写绘图事件
    void paintEvent(QPaintEvent *);
private:
    Ui::Delete_path *ui;
signals:
    void DpathBack();
};

#endif // DELETE_PATH_H
