#ifndef ROUTE1WINDOW_H
#define ROUTE1WINDOW_H

#include <QMainWindow>

namespace Ui {
class route1window;
}

class route1window : public QMainWindow
{
    Q_OBJECT

public:
    explicit route1window(QWidget *parent = nullptr);
    ~route1window();
    //计算最短结点路径
    void Least_route(QString start,QString end);
    QString Route;
    //重写绘图事件
    void paintEvent(QPaintEvent *);

private:
    Ui::route1window *ui;
signals:
    void Route1Back();
};

#endif // ROUTE1WINDOW_H
