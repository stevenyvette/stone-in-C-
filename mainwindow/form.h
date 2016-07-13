#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QtWidgets>
#include <QString>
#include <QMainWindow>
#include <cstdio>
#include <queue>
#include <QQueue>
#include "graph.h"

#define maxn 110        //最大顶点个数
#define INF 0xffffff    //权值上限
double const t=0.85; //damping factor

namespace Ui {
class Form;
}



class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();

    int dim;

    struct node{  //顶点节点，保存id和到源顶点的估算距离，优先队列需要的类型
        int id, weight;     //源顶点id和估算距离
        friend bool operator<(node a, node b){   //因要实现最小堆，按升序排列，因而需要重载运算符，重定义优先级，以小为先
            return a.weight > b.weight;
        }
    };
    QQueue <node> q;

private slots:
    void on_exit_clicked();

    void on_remove_textEdited(const QString &arg3);

    void on_confirm_remove_clicked();

    void on_openadj_clicked();

    void on_openpro_clicked();

    void on_reset_clicked();

    int NeighbourNumber(char v,char r,int count);

    double WRP(char v,char r,int count);

    double ReplacementValue(char v,char r,int count);

    int Dijkstra(char v,char r,int n);

    double POCC(int count);

    void Candidate(char r,int k,int count);

    double ReplaceProbability(char v,char r,int count);

private:
    Ui::Form *ui;
    void loadAdjFile(const QString &fileName);
    void loadProFile(const QString &fileName);
};

#endif // FORM_H
