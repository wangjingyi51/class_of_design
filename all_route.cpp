#include "all_route.h"
#include "ui_all_route.h"
#include "graph.h"
#include "QDebug"
#include "QFile"
#include "QMessageBox"
#include "QPainter"

All_route::All_route(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::All_route)
{
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
        if(this->flag == 0)
        {
            QMessageBox dlg(this);
            dlg.setText("没有路径！");
            dlg.exec();
        }
            this->Clear_queue();
            this->visit();
            emit this->All_routeBack();
    });
}
void All_route::Qet_allGraph(QString Start_name, QString End_name)
{
    this->start = Start_name;
    this->end = End_name;
}
void All_route::Creat(GraAdjList &g)
{
    int k,j,w,h;
    EdgeNode* e = NULL;
    EdgeNode* q = NULL;

    QFile file("D:\\ClassDesign_picture\\school.TXT");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString Nstr = file.readAll();
    file.close();
    QStringList list = Nstr.split("\n");

    qDebug()<<list<<list.size();
    int Vsize = list.size();
    QFile file1("D:\\ClassDesign_picture\\school_route.TXT");
    if(!file1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString Rstr = file1.readAll();
    file1.close();
    QStringList list1 = Rstr.split("\n");

    qDebug()<<list1<<list1.size();
    int Esize = list1.size();

    g.Nodenum = Vsize;
    g.Edgnum = Esize;
    int i = 0;
    for (k = 0; k < g.Nodenum; k++)
    {
        QStringList list2 = list[k].split(" ");
        g.AdjList[k].Nname = list2[0];
        g.AdjList[k].Nx = list2[1].toInt();
        g.AdjList[k].Ny = list2[2].toInt();
        g.AdjList[k].Nfunction = list[3];
        g.AdjList[k].Nicon = i;
        i++;
        //初始值为空
        g.AdjList[k].first = NULL;
    }
    //建立边表
    for (k = 0; k < g.Edgnum; k++)
    {
        QStringList list3 = list1[k].split(" ");
        e = new EdgeNode;
        e->vertex = list3[0];
        e->adjVex = list3[1];
        e->weight = list3[2].toInt();
        for(j=0;j<g.Nodenum;j++)
        {
            QStringList list4 = list[j].split(" ");
            if(list4.contains(list3[0]))
            {
                qDebug()<<j;
                w=j;
            }
        }
        e->next = g.AdjList[w].first;
        g.AdjList[w].first = e;
        //无向图
        q = new EdgeNode;
        q->vertex = list3[1];
        q->adjVex = list3[0];
        q->weight = list3[2].toInt();
        for(j=0;j<g.Nodenum;j++)
        {
            QStringList list4 = list[j].split(" ");
            if(list4.contains(list3[1]))
            {
                qDebug()<<j;
                h=j;
            }
        }
        q->next = g.AdjList[h].first;
        g.AdjList[h].first = q;
    }
}
void All_route::Print(GraAdjList &g)
{
    qDebug() << "邻接表" ;
    EdgeNode* p;
    for (int i = 0; i < g.Nodenum; i++)
    {
        qDebug() << "顶点:" << g.AdjList[i].Nname;
        for(p = g.AdjList[i].first;p;p = p->next)
        {
            qDebug() << p->adjVex<<" " << "权值：" << p->weight;
        }
    }

}
void All_route::visit()
{
    int i = 0;
    for(i=0;i<50;i++)
    {
        this->Visited[i]=0;
    }
}
void All_route::Clear_queue()
{
    int i=0;
    for(i=0;i<50;i++)
    {
        this->a[i]= "";
    }
}
int All_route::DFS(GraAdjList &g, QString name, QString e_name)
{
    QFile file("D:\\ClassDesign_picture\\school.TXT");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString Nstr = file.readAll();
    file.close();
    QStringList list = Nstr.split("\n");
    int v;
    for(int j=0;j<g.Nodenum;j++)
    {
        QStringList list2 = list[j].split(" ");
        if(list2.contains(name))
        {
             v = j;
             break;
        }
    }
    QString E_name = e_name;
    //储存顶点信息
    QString i;
    int icon;

    qDebug() << g.AdjList[v].Nname << " ";//输出顶点v的信息
    QString node = g.AdjList[v].Nname;
    //入队
    this->a[++this->rear]= node;

    Visited[v] = 1;//访问标记
    EdgeNode* p = g.AdjList[v].first;
    while (p)
    {
        i = p->adjVex;
        if(i==e_name)
        {
            this->flag = 1;
            while (this->front!=this->rear)
            {
//                ui->textBrowser->repaint();
                front++;
                ui->textBrowser->insertPlainText(a[front]);
                ui->textBrowser->insertPlainText("->");
            }
            qDebug()<<front<<rear;
            ui->textBrowser->insertPlainText(i);
            qDebug()<<"本条路结束！";
            ui->textBrowser->append(" ");
            break;
        }
        for(int j=0;j<g.Nodenum;j++)
        {
            QStringList list3 = list[j].split(" ");
            if(list3.contains(i))
            {
                 icon = j;
                 break;
            }
        }
        if (Visited[icon] == 0)
        {
            DFS(g,i,E_name);
        }
        if (Visited[icon] == 1)
        {
            p = p->next;//继续下一条边的遍历
        }
     }
}
void All_route::Defed(int i)
{
    GraAdjList g;
    if(i==0)
    {
        this->Creat(g);
        qDebug()<<"创建图成功！";
        this->Print(g);
    }
    if(i==1)
    {
        this->Creat(g);
        qDebug()<<"输出图：";
        this->Print(g);
        this->visit();
        qDebug()<<"DFS算法：";
        this->DFS(g,this->start,this->end);
    }
}
void All_route::paintEvent(QPaintEvent *)
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
        if(list[0]==this->start|list[0]==this->end)
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
All_route::~All_route()
{
    delete ui;
}
