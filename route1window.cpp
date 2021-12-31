#include "route1window.h"
#include "ui_route1window.h"
#include "QFile"
#include "QDebug"
#include "graph.h"
#include "QPainter"


route1window::route1window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::route1window)
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
    ui->textBrowser->setFont(font1);

    //点击返回路径查询界面
    connect(ui->pushButton,&QPushButton::clicked,[=](){
            emit this->Route1Back();
    });
}
void route1window::Least_route(QString start, QString end)
{
    QString S_name = start;
    QString E_name = end;
    Graph graph;
    graph.Getname(S_name,E_name);
    //graph.print_graph();
    QString a;
    graph.Creat_graph();
    a = graph.Dijkstra_node(start,end);
    this->Route = a;
    ui->textBrowser->insertPlainText("经过结点最少路径：");
    ui->textBrowser->append(a);

}
void route1window::paintEvent(QPaintEvent *)
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
    for(int i=0;i<list6.size();i++)
    {
        QString str = list6[i];
        QStringList list = str.split(" ");
        painter.setPen(QPen(QColor(0,255,0), 15));
        painter.drawPoint(list[1].toInt(),list[2].toInt());

    }
    //画路线
    QFile file1("D:\\ClassDesign_picture\\school_route.TXT");
    if(!file1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString Rstr = file1.readAll();
    file1.close();
    QStringList list = Rstr.split("\n");
    // 设置画笔颜色、宽度
    QStringList list3 = this->Route.split("->");
    qDebug()<<list3;

    QVector<int> node1_x(list3.size());
    QVector<int> node1_y(list3.size());
    QVector<int> node2_x(list3.size());
    QVector<int> node2_y(list3.size());
    painter.setPen(QPen(QColor(255,20,147), 8));
    int a = 0;
    int b = 0;
    int j = 0;
    while (j<=list3.size()-2) {
        QString str1 = list3[j];
        QString str2 = list3[j+1];

        qDebug()<<str1;
        for(int i=0;i<list6.size();i++)
        {
            QString str = list6[i];
            QStringList list4 = str.split(" ");
            if(str1==list4[0])
            {
                qDebug()<<list4[1]<<list4[2];
                node1_x[a] = list4[1].toInt();
                node1_y[a] = list4[2].toInt();
                a++;
                break;
            }
        }
        for(int k=0;k<list6.size();k++)
        {
            QString str3 = list6[k];
            QStringList list5 = str3.split(" ");
            if(str2==list5[0])
            {
                qDebug()<<list5[1]<<list5[2];
                node2_x[b]=list5[1].toInt();
                node2_y[b]=list5[2].toInt();
                b++;
                break;
            }
        }
        j++;
    }
    a = 0;
    while (a<=b) {
        painter.drawLine(node1_x[a],node1_y[a],node2_x[a],node2_y[a]);
        a++;
    }

}
route1window::~route1window()
{
    delete ui;
}
