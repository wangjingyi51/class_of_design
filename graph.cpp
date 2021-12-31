#include "graph.h"
#include <QString>
#include <QFile>
#include <QDebug>
#include <QStringList>
#include <QVector>
#include <QDebug>
#include <stdio.h>
#include <iostream>
#define MAX 50
const int _INFINITY = 65535; //定义一个不可能输入的数字表示无穷

void Graph::Getname(QString Start_name, QString End_name)
{
    this->start = Start_name;
    this->end = End_name;
    qDebug()<<"起始地点："<<this->start<<"目的地："<<this->end;
}
int Graph::Iq_icon(QString Iq_location)
{
    int v;
    QString location = Iq_location;
    //查找对应索引值
    QFile file("D:\\ClassDesign_picture\\school.TXT");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString Nstr = file.readAll();
    file.close();
    QStringList list = Nstr.split("\n");
    for(int j=0;j<list.size();j++)
    {
        QStringList list2 = list[j].split(" ");
        if(list2.contains(location))
        {
             v = j;
             break;
        }
    }
    qDebug()<<"索引值为："<<v;
    return v;
}
void Graph::print_graph()
{
    qDebug() << "权值为1的邻接矩阵为：" ;
        for (int i = 0; i < this->vertex_num; i++)
        {
            for (int j = 0; j < this->vertex_num; j++)
            {
                std::cout<<this->edge_n[i][j]<<"\t";
                printf("\t");

            }
            printf("\n");
        }

}
//返回最小值下标
int Graph::Min(int *_distance, int num)
{
    int index = 0, min = _INFINITY;
    for (int i = 0; i < num; i++)
    {
        if (!this->final[i] && _distance[i] < min)
        {
            min = _distance[i];
            index = i;
        }
    }
    return index;
}
//Dijkstra算法
QString  Graph::Dijkstra(QString start, QString end)
{
    int v;
    int t;
    QString a;
    v = this->Iq_icon(start);
    t = this->Iq_icon(end);
    qDebug()<<v;
    int i, j, min;
    this->path = new QString[MAX];
    this->final = new int[MAX];
    this->distance = new int[MAX];
    //初始化上列数组
    for (i = 0; i < this->vertex_num; i++)
    {
        this->final[i] = 0;
        this->distance[i] = this->edge[v][i]; //初始化为源点到各t'hi点的权值大小
        if (this->distance[i] != _INFINITY)
        {
            this->path[i] = this->vertex[v] +"->"+this->vertex[i]; //当直接路径存在时，同样初始化为源点到各点的路径
        }
        else
        {
            this->path[i] = "";
        }
    }
    //初始化源点
    this->distance[v] = 0;
    this->final[v] = 1;

    //开始主循环，每次求得v到一个顶点的最短路径,所以循环次数比顶点数少一次
    for (i = 0; i < this->vertex_num; i++)
    {
        min = this->Min(distance, this->vertex_num); //求当前最小值下标
        qDebug()<< "最短路径：" << this->path[min] << "\t权值：" << this->distance[min] ; //输出当前最短路径
        this->final[min] = 1;
        //再次循环，修正当前最短路径及其权值和
        for (j = 0; j < this->vertex_num; j++)
        {
            //如果经过的顶点的路径比现在这条路径还短的话
            if (!this->final[j] && this->distance[j] > this->edge[min][j] + this->distance[min])
            {
                this->distance[j] = this->edge[min][j] + this->distance[min];
                this->path[j] = this->path[min] +"->"+ this->vertex[j];
            }

        }
        QStringList list = this->path[min].split("->");
        int size = list.size();
        if( list[size-1]==end)
        {
             QString s = QString("%1").arg(this->distance[min]);
             a = QString(this->path[min]+" "+s);
             //qDebug()<<a;
        }

    }
    delete[]path;
    delete[]distance;
    delete[]final;
    return a;
}
QString Graph::Dijkstra_node(QString start, QString end)
{
    int i,j,k;
    int v;
    int t;
    QString a;
    v = this->Iq_icon(start);
    t = this->Iq_icon(end);
    //qDebug()<<v;
    int  min;
    this->path = new QString[MAX];
    this->final = new int[MAX];
    this->distance = new int[MAX];
    //初始化上列数组
    for (i = 0; i < this->vertex_num; i++)
    {
        this->final[i] = 0;
        this->distance[i] = this->edge_n[v][i]; //初始化为源点到各t'hi点的权值大小
        if (this->distance[i] != _INFINITY)
        {
            this->path[i] = this->vertex[v] +"->"+this->vertex[i]; //当直接路径存在时，同样初始化为源点到各点的路径
        }
        else
        {
            this->path[i] = "";
        }
    }
    //初始化源点
    this->distance[v] = 0;
    this->final[v] = 1;

    //开始主循环，每次求得v到一个顶点的最短路径,所以循环次数比顶点数少一次
    for (i = 0; i < this->vertex_num; i++)
    {
        min = this->Min(distance, this->vertex_num); //求当前最小值下标
        qDebug()<< "最短路径：" << this->path[min] << "\t权值：" << this->distance[min] ; //输出当前最短路径
        this->final[min] = 1;
        //再次循环，修正当前最短路径及其权值和
        for (j = 0; j < this->vertex_num; j++)
        {
            //如果经过的顶点的路径比现在这条路径还短的话
            if (!this->final[j] && this->distance[j] > this->edge_n[min][j] + this->distance[min])
            {
                this->distance[j] = this->edge_n[min][j] + this->distance[min];
                this->path[j] = this->path[min] +"->"+ this->vertex[j];
            }

        }
        QStringList list = this->path[min].split("->");
        int size = list.size();
        if( list[size-1]==end)
        {
             a = QString(this->path[min]);
             //qDebug()<<a;
        }

    }
    delete[]path;
    delete[]distance;
    delete[]final;
    return a;
}
void Graph::Creat_graph()
{
    int i, j, k;
    //创建顶点表
    QFile file("D:\\ClassDesign_picture\\school.TXT");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString Nstr = file.readAll();
    file.close();
    QStringList list = Nstr.split("\n");

    this->vertex_num = list.size();
    for(i=0;i<this->vertex_num;i++)
    {
        QStringList list2 = list[i].split(" ");
        this->vertex[i]=list2[0];
    }
    //初始化邻接矩阵
    for (i = 0; i < this->vertex_num; i++)
    {
        for (j = 0; j < this->vertex_num; j++)
        {
            if (i == j)
            {
                this->edge_n[i][j] = 0;
            }
            else
            {
                this->edge_n[i][j] = _INFINITY;
            }

        }
    }
    //创建邻接矩阵
    QFile file1("D:\\ClassDesign_picture\\school_route.TXT");
    if(!file1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString Rstr = file1.readAll();
    file1.close();
    QStringList list1 = Rstr.split("\n");

    this->edge_num = list1.size();
    for (k = 0; k < this->edge_num; k++)
    {
        QStringList list3 = list1[k].split(" ");
        i = this->Iq_icon(list3[0]);
        j = this->Iq_icon(list3[1]);
        edge_n[i][j] = 1;
        //无向图
        edge_n[j][i] = 1;
    }
}
Graph::Graph()
{
    int i, j, k;
    //创建顶点表
    QFile file("D:\\ClassDesign_picture\\school.TXT");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString Nstr = file.readAll();
    file.close();
    QStringList list = Nstr.split("\n");

    this->vertex_num = list.size();
    for(i=0;i<this->vertex_num;i++)
    {
        QStringList list2 = list[i].split(" ");
        this->vertex[i]=list2[0];
    }
    //初始化邻接矩阵
    for (i = 0; i < this->vertex_num; i++)
    {
        for (j = 0; j < this->vertex_num; j++)
        {
            if (i == j)
            {
                this->edge[i][j] = 0;
            }
            else
            {
                this->edge[i][j] = _INFINITY;
            }

        }
    }
    //创建邻接矩阵
    QFile file1("D:\\ClassDesign_picture\\school_route.TXT");
    if(!file1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString Rstr = file1.readAll();
    file1.close();
    QStringList list1 = Rstr.split("\n");

    this->edge_num = list1.size();
    for (k = 0; k < this->edge_num; k++)
    {
        QStringList list3 = list1[k].split(" ");
        i = this->Iq_icon(list3[0]);
        j = this->Iq_icon(list3[1]);
        edge[i][j] = list3[2].toInt();
        //无向图
        edge[j][i] = list3[2].toInt();
    }

}

