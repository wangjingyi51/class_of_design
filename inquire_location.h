#ifndef INQUIRE_LOCATION_H
#define INQUIRE_LOCATION_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class Inquire_location;
}

class Inquire_location : public QMainWindow
{
    Q_OBJECT

public:
    //参数为查询地点
    explicit Inquire_location(QWidget *parent = nullptr);
    ~Inquire_location();
    //地点值索引
    QString location = "";
    //传入地点函数
    void Getlocation(QString string);
    //重写绘图事件
    void paintEvent(QPaintEvent *);
private:
    Ui::Inquire_location *ui;
signals:
    void IqlocationBack();
};

#endif // INQUIRE_LOCATION_H
