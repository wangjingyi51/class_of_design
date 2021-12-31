#ifndef INCREASE_PATH_H
#define INCREASE_PATH_H

#include <QMainWindow>

namespace Ui {
class Increase_path;
}

class Increase_path : public QMainWindow
{
    Q_OBJECT

public:
    explicit Increase_path(QWidget *parent = nullptr);
    ~Increase_path();
    //重写绘图事件
    void paintEvent(QPaintEvent *);

private:
    Ui::Increase_path *ui;
signals:
    void IpathBack();
};

#endif // INCREASE_PATH_H
