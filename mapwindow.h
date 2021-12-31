#ifndef MAPWINDOW_H
#define MAPWINDOW_H

#include <QMainWindow>
#include <inquire_location.h>

namespace Ui {
class MapWindow;
}

class MapWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MapWindow(QWidget *parent = nullptr);
    ~MapWindow();
    //查询界面
    Inquire_location *Iqlocation = NULL;
    //重写绘图事件
    void paintEvent(QPaintEvent *);
private:
    Ui::MapWindow *ui;
    //地点查询
    void location();
signals:
    //返回上一个界面
    void MapBack();

};

#endif // MAPWINDOW_H
