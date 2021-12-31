#include "inquire_location.h"
#include "ui_inquire_location.h"
#include "QFile"
#include "QDebug"
#include "mapwindow.h"
#include "QPainter"
#include "QFile"
#include "graph.h"

Inquire_location::Inquire_location(QWidget *parent)
    :QMainWindow(parent),
    ui(new Ui::Inquire_location)
{
    ui->setupUi(this);
    //配置主窗口
    this->setFixedSize(1500,1000);
    this->setWindowTitle("西邮校园地图导航");
    this->setWindowIcon(QPixmap(":/ui_1/school1.jpg"));
    //配置主窗口
    this->setFixedSize(1500,1000);
    this->setWindowTitle("西邮校园地图导航");
    this->setWindowIcon(QPixmap(":/ui_1/school1.jpg"));
    //设置按钮样式
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
    list.replace(6, "font:bold 35px");
    connect(ui->pushButton, &QPushButton::pressed, [=](){
           ui->pushButton->setStyleSheet(list.join(';'));
    });
    // 按钮弹起时恢复样式
    list.replace(6, "font:bold 30px");
    connect(ui->pushButton, &QPushButton::released, [=](){
           ui->pushButton->setStyleSheet(list.join(';'));
    });
    //设置按钮字体
    QFont font1 ("宋体",5,55);
    font1.setPointSize(20);
    ui->pushButton->setFont(font1);
    ui->label->setFont(font1);
    ui->label_2->setFont(font1);
    ui->label_3->setFont(font1);
    ui->label_4->setFont(font1);
    ui->textBrowser->setFont(font1);
    ui->textBrowser_2->setFont(font1);
    ui->textBrowser_3->setFont(font1);
    ui->textBrowser_4->setFont(font1);
    //点击返回
    connect(ui->pushButton,&QPushButton::clicked,[=]()
    {
        emit  this->IqlocationBack();
    });
}
void Inquire_location::Getlocation(QString string)
{
    this->location = string;
    //读取地点
    QFile file("D:\\ClassDesign_picture\\school.TXT");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        QString str(line);
        QStringList list4 = str.split(" ");
        QString str1 = list4[0];
        if(this->location==str1)
        {
            ui->textBrowser->setText(list4[0]);
            ui->textBrowser_2->setText(list4[1]);
            ui->textBrowser_3->setText(list4[2]);
            ui->textBrowser_4->setText(list4[3]);
            break;
        }
    }
    file.close();
}
void Inquire_location::paintEvent(QPaintEvent *)
{
    //校园导航底图
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/new/prefix1/ui2/background1.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    pix.load(":/ui3/map.jpg");
    painter.drawPixmap(50,50,770,770,pix);
    //画地点
    QFile file2("D:\\ClassDesign_picture\\school.TXT");
    if(!file2.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString Nstr1 = file2.readAll();
    file2.close();
    QStringList list6 = Nstr1.split("\n");
    // 设置画笔颜色、宽度
    //qDebug()<<this->location;
    for(int i=0;i<list6.size();i++)
    {
        QString str = list6[i];
        QStringList list = str.split(" ");
        if(list[0]==this->location)
        {
            painter.setPen(QPen(QColor(255,20,147), 20));
            painter.drawPoint(list[1].toInt(),list[2].toInt());
        }
        else
        {
           painter.setPen(QPen(QColor(0,255,0), 15));
           painter.drawPoint(list[1].toInt(),list[2].toInt());
        }
    }
}


Inquire_location::~Inquire_location()
{
    delete ui;
}
