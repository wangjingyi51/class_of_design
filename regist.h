#ifndef REGIST_H
#define REGIST_H

#include <QWidget>
#include <userwindow.h>
#include <admwindow.h>

namespace Ui {
class regist;
}

class regist : public QWidget
{
    Q_OBJECT

public:
    explicit regist(QWidget *parent = nullptr);
    ~regist();
    //绘图事件
    void paintEvent(QPaintEvent * e);
    //用户界面
    Userwindow *user=NULL;
    //管理员界面
    AdmWindow *adm=NULL;

private:
    Ui::regist *ui;
};

#endif // REGIST_H
