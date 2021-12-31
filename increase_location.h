#ifndef INCREASE_LOCATION_H
#define INCREASE_LOCATION_H

#include <QMainWindow>

namespace Ui {
class Increase_location;
}

class Increase_location : public QMainWindow
{
    Q_OBJECT

public:
    explicit Increase_location(QWidget *parent = nullptr);
    ~Increase_location();
    //重写绘图事件
    void paintEvent(QPaintEvent *);
private:
    Ui::Increase_location *ui;
signals:
    void IlocationBack();
};

#endif // INCREASE_LOCATION_H
