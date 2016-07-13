#include "graph.h"
#include "ui_graph.h"
#include <QtWidgets>
#include <qmath.h>
#include <QtDebug>

extern int **adjmatrix;
extern char **promatrix;
extern int count2;

Graph::Graph(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Graph)
{
    ui->setupUi(this);
}

Graph::~Graph()
{
    delete ui;
}

void QGraphicsView::wheelEvent(QWheelEvent *event)
{
    int numDegrees = event->delta()/8;
    int numSteps = numDegrees/15;

    if(event->orientation()==Qt::Vertical&&numSteps<0){
        scale(-1.2*numSteps,-1.2*numSteps);
    }
    else{
        scale(1/(1.2*numSteps),1/(1.2*numSteps));
    }
    event->accept();
}

void Graph::on_pushButton_clicked()
{
    QGraphicsScene *scene = new QGraphicsScene;

    for(int i=0;i<count2;i++){
        scene->addEllipse((qCos(i*2*3.1415/count2))*count2*10,(qSin(i*2*3.1415/count2))*count2*10,
                          (promatrix[i][1]-48)*5,(promatrix[i][1]-48)*5,QPen(Qt::cyan),QBrush(Qt::cyan));
        QGraphicsTextItem *txtitem = new QGraphicsTextItem(QString(promatrix[i][0]));
        txtitem->setPos((qCos(i*2*3.1415/count2))*count2*10-10,(qSin(i*2*3.1415/count2))*count2*10-10);
        txtitem->setDefaultTextColor(Qt::red);
        scene->addItem(txtitem);
    }

    for(int i=0;i<count2;i++)
        for(int j=i;j<count2;j++){
            QGraphicsLineItem *lineitem=new QGraphicsLineItem;
            lineitem->setPen(QPen(Qt::blue));
            if(adjmatrix[i][j]==1){
                lineitem->setLine((qCos(i*2*3.1415/count2))*count2*10+(promatrix[i][1]-48)*5/2,
                        (qSin(i*2*3.1415/count2))*count2*10+(promatrix[i][1]-48)*5/2,
                        (qCos(j*2*3.1415/count2))*count2*10+(promatrix[j][1]-48)*5/2,
                        (qSin(j*2*3.1415/count2))*count2*10+(promatrix[j][1]-48)*5/2);
                scene->addItem(lineitem);
            }
        }

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);
}

void Graph::on_pushButton_2_clicked()
{
    this->close();
}
