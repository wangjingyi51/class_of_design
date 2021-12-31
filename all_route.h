#ifndef ALL_ROUTE_H
#define ALL_ROUTE_H

#include <QWidget>
#define MaxSize 50
#include <QObject>
#include <QString>

//边表
struct EdgeNode
{
    QString vertex; //边的一端顶点
    QString adjVex; //边的另一端顶点
    int   weight; //边的权重
    EdgeNode* next;
};
//顶点表
struct ENode
{
    EdgeNode* first;//第一条边信息
    //点信息
    QString Nname;
    int Nx;
    int Ny;
    QString Nfunction;
    int Nicon;//点索引
};
//邻接表
struct GraAdjList
{
    //顶点数组
    ENode AdjList[50];
    //顶点数目
    int Nodenum;
    //边数
    int Edgnum;
};
namespace Ui {
class All_route;
}

class All_route : public QWidget
{
    Q_OBJECT

public:
    explicit All_route(QWidget *parent = nullptr);
    ~All_route();
    //图论——查找所有路径
    void Qet_allGraph(QString Start_name,QString End_name);

    void Getname(QString Start_name,QString End_name);//获取查找参数
    void Creat(GraAdjList& g);//建立图
    void Print(GraAdjList& g);//遍历输出图
    int DFS(GraAdjList &g,QString name,QString e_name);//递归DFS
    void IqAll_route(GraAdjList &g);//查找所有路径
    void visit();//标记数组Visited初始化
    void Defed(int i);//图论操作选择
    void Clear_queue();
    int Visited[50];
    QString start;
    QString end;
    int flag = 0;
    //储存队列
    QString a[100];
    int front = -1;
    int rear = -1;
    //重写绘图事件
    void paintEvent(QPaintEvent *);

private:
    Ui::All_route *ui;
signals:
    void All_routeBack();
};

#endif // ALL_ROUTE_H
