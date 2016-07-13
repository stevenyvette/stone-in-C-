#ifndef STONE_H
#define STONE_H

#include <QWidget>
#include <QQueue>

#define maxn1 110        //最大顶点个数
#define INF1 0xffffff    //权值上限

double const t1=0.85; //damping factor

namespace Ui {
class stone;
}

class stone : public QWidget
{
    Q_OBJECT

public:
    explicit stone(QWidget *parent = 0);
    ~stone();

    struct node{  //顶点节点，保存id和到源顶点的估算距离，优先队列需要的类型
        int id, weight;     //源顶点id和估算距离
        friend bool operator<(node a, node b){   //因要实现最小堆，按升序排列，因而需要重载运算符，重定义优先级，以小为先
            return a.weight > b.weight;
        }
    };
    QQueue <node> p;

private slots:
    void on_back_clicked();

    void on_go_clicked();

    int NeighbourNumber(char v,char r,int count);

    double WRP(char v,char r,int count);

    double ReplacementValue(char v,char r,int count);

    int Dijkstra(char v,char r,int n);

    double ReplaceProbability(char v,char r,int count);

private:
    Ui::stone *ui;
};

#endif // STONE_H
