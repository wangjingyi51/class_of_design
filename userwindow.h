#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>
#include <mapwindow.h>
#include <routewindow.h>
#include <QMediaPlayer>

namespace Ui {
class Userwindow;
}

class Userwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Userwindow(QWidget *parent = nullptr);
    ~Userwindow();
    //查询地点界面
    MapWindow *didianmap=NULL;
    //查询路径界面
    RouteWindow *routemap=NULL;
    //媒体播放
    QMediaPlayer *player = NULL;
    //重写绘图事件
    void paintEvent(QPaintEvent *);
private:
    Ui::Userwindow *ui;
signals:
    void RegistBack();
};

#endif // USERWINDOW_H
