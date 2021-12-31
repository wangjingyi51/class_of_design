#ifndef ROUTE2WINDOW_H
#define ROUTE2WINDOW_H

#include <QMainWindow>

namespace Ui {
class route2window;
}

class route2window : public QMainWindow
{
    Q_OBJECT

public:
    explicit route2window(QWidget *parent = nullptr);
    ~route2window();
    void Iq_shortestroute(QString start,QString end);
    QString Route;
    //重写绘图事件
    void paintEvent(QPaintEvent *);

private:
    Ui::route2window *ui;
signals:
    void Route2Back();
};

#endif // ROUTE2WINDOW_H
