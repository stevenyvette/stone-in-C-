#ifndef RESHAPE_H
#define RESHAPE_H

#include <QWidget>
#include "graph.h"
#include "graph2.h"



namespace Ui {
class Reshape;
}

class Reshape : public QWidget
{
    Q_OBJECT

public:
    explicit Reshape(QWidget *parent = 0);
    ~Reshape();
    void inti();

private slots:
    void on_quit_clicked();
    void on_confirm_clicked();
    void ReshapeAdj(char v,char r,int count);
    void ReshapePro(char v,char r,int count);

    void on_showorigingraph_clicked();

    void on_showreshapegraph_clicked();

private:
    Ui::Reshape *ui;
    Graph origin;
    Graph2 reshape;
};

#endif // RESHAPE_H
