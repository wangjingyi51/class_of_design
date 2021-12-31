#ifndef ADMWINDOW_H
#define ADMWINDOW_H

#include <QMainWindow>
#include <increase_location.h>
#include <increase_path.h>
#include <delete_location.h>
#include <delete_path.h>
#include <QMediaPlayer>

namespace Ui {
class AdmWindow;
}

class AdmWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdmWindow(QWidget *parent = nullptr);
    ~AdmWindow();
    //增加地点界面
    Increase_location *Ilocation = NULL;
    //增加路径界面
    Increase_path *Ipath = NULL;
    //删除地点界面
    delete_location *Dlocation = NULL;
    //删除路径界面
    Delete_path *Dpath = NULL;
    //媒体播放
    QMediaPlayer *player = NULL;
    //重写绘图事件
    void paintEvent(QPaintEvent *);
private:
    Ui::AdmWindow *ui;
signals:
    void AdmBack();
};

#endif // ADMWINDOW_H
