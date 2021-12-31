#ifndef ROUTEWINDOW_H
#define ROUTEWINDOW_H

#include <QMainWindow>
#include <route1window.h>
#include <route2window.h>
#include <all_route.h>

namespace Ui {
class RouteWindow;
}

class RouteWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RouteWindow(QWidget *parent = nullptr);
    ~RouteWindow();
    //最少中转点路径
    route1window *route1 = NULL;
    //最短权值路径
    route2window *route2 = NULL;
    //所有路径显示
    All_route *aroute = NULL;
    //地点选择
    void location();
    //绘图事件
    void paintEvent(QPaintEvent*);

private:
    Ui::RouteWindow *ui;
signals:
    void RouteBack();
};

#endif // ROUTEWINDOW_H
