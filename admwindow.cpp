#include "admwindow.h"
#include "ui_admwindow.h"
#include "QPushButton"
#include "QPainter"
#include "QFile"
#include "QDebug"
#include "QMediaPlayer"

AdmWindow::AdmWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdmWindow)
{
    ui->setupUi(this);
    //设置页面属性
    this->setFixedSize(1500,1000);
    this->setWindowTitle("管理员页面");
    this->setWindowIcon(QPixmap(":/ui_1/school1.jpg"));
    //播放背景音乐
    this->player = new QMediaPlayer(this);//设置背景音乐
    player->setMedia(QUrl("qrc:/new/prefix2/music/admusic.mp3"));
    player->setVolume(50);//音量
    player->play();
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
    ui->pushButton_2->setStyleSheet(list.join(';'));
    ui->pushButton_3->setStyleSheet(list.join(';'));
    ui->pushButton_4->setStyleSheet(list.join(';'));
    ui->pushButton_5->setStyleSheet(list.join(';'));
    // 按钮按下时修改样式
    list.replace(6, "font:bold 35px");
    connect(ui->pushButton, &QPushButton::pressed, [=](){
           ui->pushButton->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_2, &QPushButton::pressed, [=](){
           ui->pushButton_2->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_3, &QPushButton::pressed, [=](){
           ui->pushButton_3->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_4, &QPushButton::pressed, [=](){
           ui->pushButton_4->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_5, &QPushButton::pressed, [=](){
           ui->pushButton_5->setStyleSheet(list.join(';'));
    });
    // 按钮弹起时恢复样式
    list.replace(6, "font:bold 30px");
    connect(ui->pushButton, &QPushButton::released, [=](){
           ui->pushButton->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_2, &QPushButton::released, [=](){
           ui->pushButton_2->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_3, &QPushButton::released, [=](){
           ui->pushButton_3->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_4, &QPushButton::released, [=](){
           ui->pushButton_4->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_5, &QPushButton::released, [=](){
           ui->pushButton_5->setStyleSheet(list.join(';'));
    });


    //点击返回回到登陆界面
    connect(ui->pushButton_3,&QPushButton::clicked,[=](){
            emit this->AdmBack();
    });

    //连接四个界面
    //增加地点界面
    connect(ui->pushButton,&QPushButton::clicked,[=]()
    {
        Ilocation = new Increase_location(this);
        this->close();
        Ilocation->show();
        connect(Ilocation,&Increase_location::IlocationBack,[=](){
            Ilocation->close();
            this->show();
        });
    });
    //增加路径界面
    connect(ui->pushButton_4,&QPushButton::clicked,[=](){
        Ipath = new Increase_path(this);
        this->close();
        Ipath->show();
        connect(Ipath,&Increase_path::IpathBack,[=](){
            Ipath->close();
            this->show();
        });
    });
    //删除地点界面
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        Dlocation = new delete_location(this);
        this->close();
        Dlocation->show();
        connect(Dlocation,&delete_location::DlocationBack,[=](){
            Dlocation->close();
            this->show();
        });
    });
    //删除路径界面
    connect(ui->pushButton_5,&QPushButton::clicked,[=]()
    {
        Dpath = new Delete_path(this);
        this->close();
        Dpath->show();
        connect(Dpath,&Delete_path::DpathBack,[=](){
            Dpath->close();
            this->show();
        });
    });

}
void AdmWindow::paintEvent(QPaintEvent *)
{
    //校园导航底图
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/new/prefix1/ui2/background1.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    pix.load(":/ui3/map.jpg");
    painter.drawPixmap(50,50,770,770,pix);
    QFile file("D:\\ClassDesign_picture\\school.TXT");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString Nstr = file.readAll();
    file.close();
    QStringList list3 = Nstr.split("\n");
            qDebug()<<list3;
    //画路线
    QFile file1("D:\\ClassDesign_picture\\school_route.TXT");
    if(!file1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString Rstr = file1.readAll();
    file1.close();
    QStringList list = Rstr.split("\n");
            qDebug()<<list;
    // 设置画笔颜色、宽度
    QVector<int> node1_x(list.size());
    QVector<int> node1_y(list.size());
    QVector<int> node2_x(list.size());
    QVector<int> node2_y(list.size());
    painter.setPen(QPen(QColor(255,20,147), 8));
    int a = 0;
    int b = 0;
    for(int j=0;j<list.size();j++)
    {
        QString str1 = list[j];
        QStringList list2 = str1.split(" ");

        qDebug()<<list2[0]<<list2[1];
        for(int i=0;i<list3.size();i++)
        {
            QString str = list3[i];
            QStringList list4 = str.split(" ");
            if(list2[0]==list4[0])
            {
                qDebug()<<list4[1]<<list4[2];
                node1_x[a] = list4[1].toInt();
                node1_y[a] = list4[2].toInt();
                a++;
                break;
            }
        }
        for(int k=0;k<list3.size();k++)
        {
            QString str1 = list3[k];
            QStringList list5 = str1.split(" ");
            if(list2[1]==list5[0])
            {
                qDebug()<<list5[1]<<list5[2];
                node2_x[b]=list5[1].toInt();
                node2_y[b]=list5[2].toInt();
                b++;
                break;
            }
        }
        painter.drawLine(node1_x[j],node1_y[j],node2_x[j],node2_y[j]);
    }
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
    painter.setPen(QPen(QColor(0,255,0), 15));
    for(int i=0;i<list6.size();i++)
    {
        QString str = list6[i];
        qDebug()<<list6[i];
        QStringList list = str.split(" ");
        qDebug()<<list[1]<<list[2];
        painter.drawPoint(list[1].toInt(),list[2].toInt());
    }
}
AdmWindow::~AdmWindow()
{
    delete ui;
}
