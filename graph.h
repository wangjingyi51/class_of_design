#ifndef GRAPH_H
#define GRAPH_H
#define MaxSize 50
#include <QObject>
#include <QString>

class Graph : public QObject
{
    Q_OBJECT

public:
    QString start;
    QString end;
    void Getname(QString Start_name,QString End_name);//获取查找参数
    int Iq_icon(QString Iq_location);//查找地点对应索引值
    int vertex_num; //顶点数
    int edge_num; //边数
    QString vertex[MaxSize]; //顶点数组
    int edge[MaxSize][MaxSize]; //邻接矩阵
    int edge_n[MaxSize][MaxSize];//权值全部为1的矩阵
    int *final; //标识是否已纳入最短路径，置为1表示纳入
    int *distance; //存放最短路径的权值和
    QString *path;  //存放最短路径字符串
    void print_graph(); //打印邻接矩阵
    void Creat_graph();
    QString Dijkstra(QString start,QString end); //Dijkstra算法——最短权值
    QString Dijkstra_node(QString start,QString end);//Dijkstra算法最少中转点
    int Min(int *_distance, int num); //最小值
    Graph(); //构造函数

signals:

};

#endif // GRAPH_H
