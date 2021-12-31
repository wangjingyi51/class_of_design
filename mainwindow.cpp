#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QStringList"
#include "QPixmap"
#include "QPainter"
#include "regist.h"
#include "QMediaPlayer"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //配置主窗口
    this->setFixedSize(850,800);
    this->setWindowTitle("西邮校园地图导航");
    this->setWindowIcon(QPixmap(":/ui_1/school1.jpg"));

    //按钮设置
    // 定义初始样式集合
    QStringList list;
    list.append("color:white");                         // 前景色
    list.append("background-color:rgb(85,170,255)");    // 背景色
    list.append("border-style:outset");                 // 边框风格
    list.append("border-width:5px");                    // 边框宽度
    list.append("border-color:rgb(10,45,110)");         // 边框颜色
    list.append("border-radius:20px");                  // 边框倒角
    list.append("font:bold 30px");                      // 字体
    list.append("padding:4px");                         // 内边距
    // 设置按钮初始样式
    ui->pushButton->setStyleSheet(list.join(';'));
    // 按钮按下时修改样式
    list.replace(6, "font:bold 35px");
    connect(ui->pushButton, &QPushButton::pressed, [=](){
           ui->pushButton->setStyleSheet(list.join(';'));
    });
    // 按钮弹起时恢复样式
    list.replace(6, "font:bold 30px");
    connect(ui->pushButton, &QPushButton::released, [=](){
           ui->pushButton->setStyleSheet(list.join(';'));
    });

    ui->label_2->setText("西邮地图导航");
    //设置字体
    QFont font ("华文琥珀",10,75);
    font.setPointSize(40);
    ui->label_2->setFixedSize(500,200);
    ui->label_2->setFont(font);
    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::black);
    ui->label_2->setPalette(pa);
    //设置文字对齐:水平居中
    ui->label_2->setAlignment(Qt::AlignCenter);
    //进入主界面
    connect(ui->pushButton,&QPushButton::clicked,[=]()
    {
        //播放背景音乐
        QMediaPlayer *player = new QMediaPlayer(this);//设置背景音乐
        player->setMedia(QUrl("qrc:/new/prefix2/music/overturn.mp3"));
        player->setVolume(50);//音量
        player->play();
        this->close();
        regist.show();
    });
}
void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/ui_1/school2.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

