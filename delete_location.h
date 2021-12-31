#ifndef DELETE_LOCATION_H
#define DELETE_LOCATION_H

#include <QMainWindow>

namespace Ui {
class delete_location;
}

class delete_location : public QMainWindow
{
    Q_OBJECT

public:
    explicit delete_location(QWidget *parent = nullptr);
    ~delete_location();

private:
    Ui::delete_location *ui;
    //地点选择
    void location();
    void Delete();
    //重写绘图事件
    void paintEvent(QPaintEvent *);
signals:
    void DlocationBack();
};

#endif // DELETE_LOCATION_H
