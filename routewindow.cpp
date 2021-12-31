#include "routewindow.h"
#include "ui_routewindow.h"
#include "QFile"
#include "QDebug"
#include "QMessageBox"
#include "QPainter"

RouteWindow::RouteWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RouteWindow)
{
    ui->setupUi(this);
    ui->setupUi(this);
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
    ui->pushButton_4->setStyleSheet(list.join(';'));
    ui->pushButton_2->setStyleSheet(list.join(';'));
    ui->pushButton_3->setStyleSheet(list.join(';'));
    ui->pushButton->setStyleSheet(list.join(';'));
    list.replace(6, "font:bold 35px");
    connect(ui->pushButton, &QPushButton::pressed, [=](){
           ui->pushButton->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_4, &QPushButton::pressed, [=](){
           ui->pushButton_4->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_2, &QPushButton::pressed, [=](){
           ui->pushButton_2->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_3, &QPushButton::pressed, [=](){
           ui->pushButton_3->setStyleSheet(list.join(';'));
    });
    // 按钮弹起时恢复样式
    list.replace(6, "font:bold 30px");
    connect(ui->pushButton, &QPushButton::released, [=](){
           ui->pushButton->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_4, &QPushButton::released, [=](){
           ui->pushButton_4->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_2, &QPushButton::released, [=](){
           ui->pushButton_2->setStyleSheet(list.join(';'));
    });
    connect(ui->pushButton_3, &QPushButton::released, [=](){
           ui->pushButton_3->setStyleSheet(list.join(';'));
    });
    //设置按钮字体
    QFont font1 ("宋体",5,55);
    font1.setPointSize(20);
    ui->label->setFont(font1);
    ui->label_2->setFont(font1);
    ui->pushButton->setFont(font1);
    ui->pushButton_2->setFont(font1);
    ui->pushButton_3->setFont(font1);
    ui->pushButton_4->setFont(font1);
    ui->comboBox->setFont(font1);
    ui->comboBox_2->setFont(font1);
    this->location();
     //最少中转路径界面
      connect(ui->pushButton,&QPushButton::clicked,[=](){
         route1 = new route1window(this);
         route1->Least_route(ui->comboBox_2->currentText(),ui->comboBox->currentText());
         this->close();
         route1->show();
         connect(route1,&route1window::Route1Back,[=]()
         {
            route1->close();
            this->show();
         });
      });

     //最短权值路径
      connect(ui->pushButton_2,&QPushButton::clicked,[=](){
          route2 = new route2window(this);
          route2->Iq_shortestroute(ui->comboBox_2->currentText(),ui->comboBox->currentText());
          this->close();
          route2->show();
          connect(route2,&route2window::Route2Back,[=]()
          {
             route2->close();
             this->show();
          });
      });

      //所有路径查询界面
      connect(ui->pushButton_4,&QPushButton::clicked,[=](){
            aroute = new All_route;
            QMessageBox dlg(this);
            dlg.setText("请注意查询地点！无响应请退出！");
            dlg.exec();
            qDebug()<<ui->comboBox->currentText()<<ui->comboBox_2->currentText();
            aroute->Qet_allGraph(ui->comboBox_2->currentText(),ui->comboBox->currentText());
            aroute->Defed(1);
            aroute->show();
            this->close();
            connect(aroute,&All_route::All_routeBack,[=]()
            {
               aroute->close();
               this->show();
            });

      });

      //点击返回路径查询界面
      connect(ui->pushButton_3,&QPushButton::clicked,[=](){
              emit this->RouteBack();
      });

}
void RouteWindow::location()
{
    //地点选择
    QFile file("D:\\ClassDesign_picture\\school.TXT");
      if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
      {
          qDebug()<<"Can't open the file!"<<endl;
      }
      while(!file.atEnd())
      {
          QByteArray line = file.readLine();
          QString str(line);
          QStringList list = str.split(" ");
          QString location = list[0];
          ui->comboBox->addItem(location);
          ui->comboBox_2->addItem(location);
      }
}
void RouteWindow::paintEvent(QPaintEvent *)
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
RouteWindow::~RouteWindow()
{
    delete ui;
}
