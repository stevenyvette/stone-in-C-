#include "graph2.h"
#include "ui_graph2.h"
#include <QtWidgets>
#include <qmath.h>
#include <QtDebug>

extern int **adjmatrix;
extern char **promatrix;
extern int **readjmatrix;
extern char **repromatrix;
extern int count2;
extern char V;
extern char R;
extern char *candidate;
extern int predict;


Graph2::Graph2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Graph2)
{
    ui->setupUi(this);
}

Graph2::~Graph2()
{
    delete ui;
}

void Graph2::on_pushButton_clicked()
{
    char r=R;
    char v=(predict+65);

    for(int i=0;i<count2-1;i++)
        for(int j=0;j<count2-1;j++)
            repromatrix[i][j] = ' ';

    for(int i=0;i<count2-1;i++)
        for(int j=0;j<count2-1;j++)
            readjmatrix[i][j]=0;

    for(int i=0;i<count2;i++){
        for(int j=0;j<count2;j++){
            if(i<(r-65)&&j<(r-65))
                readjmatrix[i][j]=adjmatrix[i][j];
            if(i<(r-65)&&j>(r-65))
                readjmatrix[i][j-1]=adjmatrix[i][j];
            if(i>(r-65)&&j<(r-65))
                readjmatrix[i-1][j]=adjmatrix[i][j];
            if(i>(r-65)&&j>(r-65))
                readjmatrix[i-1][j-1]=adjmatrix[i][j];
        }
    }


    for(int i=0;i<count2;i++){
        if(adjmatrix[i][r-65]==1&&v<r&&i<(r-65)&&i!=(v-65)){
            readjmatrix[i][v-65]=1;
            readjmatrix[v-65][i]=1;
        }
        if(adjmatrix[i][r-65]==1&&v<r&&i>(r-65)&&i!=(v-65)){
            readjmatrix[i-1][v-65]=1;
            readjmatrix[v-65][i-1]=1;
        }
        if(adjmatrix[i][r-65]==1&&v>r&&i<(r-65)&&i!=(v-65)){
            readjmatrix[i][v-66]=1;
            readjmatrix[v-66][i]=1;
        }
        if(adjmatrix[i][r-65]==1&&v>r&&i>(r-65)&&i!=(v-65)){
            readjmatrix[i-1][v-66]=1;
            readjmatrix[v-66][i-1]=1;
        }
    }

    for(int i=0;i<count2;i++){
        for(int j=0;j<count2;j++){
            if(i<(r-65))
                repromatrix[i][j]=promatrix[i][j];
            if(i>(r-65))
                repromatrix[i-1][j]=promatrix[i][j];
        }
        if(i==(v-65)&&i<(r-65))
            repromatrix[i][1]=promatrix[r-65][1];
        if(i==(v-65)&&i>(r-65))
            repromatrix[i-1][1]=promatrix[r-65][1];
    }

    for(int i=0;i<count2-1;i++){
        int tmp=0;
        for(int j=0;j<count2-1;j++)
            if(readjmatrix[i][j]==1)
                tmp+=1;
        repromatrix[i][5]=tmp+48;
    }

    QGraphicsScene *scene = new QGraphicsScene;

    for(int i=0;i<count2;i++){
        if(i<(r-65)){
            scene->addEllipse((qCos(i*2*3.1415/(count2)))*(count2)*10,
                              (qSin(i*2*3.1415/(count2)))*(count2)*10,
                              (repromatrix[i][1]-48)*5,
                              (repromatrix[i][1]-48)*5,
                              QPen(Qt::cyan),QBrush(Qt::cyan));
            QGraphicsTextItem *txtitem = new QGraphicsTextItem(QString(repromatrix[i][0]));
            txtitem->setPos((qCos(i*2*3.1415/(count2)))*(count2)*10-10,(qSin(i*2*3.1415/(count2)))*(count2)*10-10);
            txtitem->setDefaultTextColor(Qt::red);
            scene->addItem(txtitem);
        }
        if(i>(r-65)){
            scene->addEllipse((qCos(i*2*3.1415/(count2)))*(count2)*10,
                              (qSin(i*2*3.1415/(count2)))*(count2)*10,
                              (repromatrix[i-1][1]-48)*5,
                              (repromatrix[i-1][1]-48)*5,
                              QPen(Qt::cyan),QBrush(Qt::cyan));
            QGraphicsTextItem *txtitem = new QGraphicsTextItem(QString(repromatrix[i-1][0]));
            txtitem->setPos((qCos(i*2*3.1415/(count2)))*(count2)*10-10,
                            (qSin(i*2*3.1415/(count2)))*(count2)*10-10);
            txtitem->setDefaultTextColor(Qt::red);
            scene->addItem(txtitem);
        }
    }

    for(int i=0;i<(count2-1);i++)
        for(int j=i;j<(count2-1);j++){
            QGraphicsLineItem *lineitem=new QGraphicsLineItem;
            lineitem->setPen(QPen(Qt::blue));
            if(readjmatrix[i][j]==1&&i<(r-65)&&j<(r-65)){
                lineitem->setLine((qCos(i*2*3.1415/count2))*count2*10+(repromatrix[i][1]-48)*5/2,
                        (qSin(i*2*3.1415/count2))*count2*10+(repromatrix[i][1]-48)*5/2,
                        (qCos(j*2*3.1415/count2))*count2*10+(repromatrix[j][1]-48)*5/2,
                        (qSin(j*2*3.1415/count2))*count2*10+(repromatrix[j][1]-48)*5/2);
                scene->addItem(lineitem);
            }
            if(readjmatrix[i][j]==1&&i<(r-65)&&j>=(r-65)){
                lineitem->setLine((qCos(i*2*3.1415/(count2)))*(count2)*10+(repromatrix[i][1]-48)*5/2,
                        (qSin(i*2*3.1415/(count2)))*(count2)*10+(repromatrix[i][1]-48)*5/2,
                        (qCos((j+1)*2*3.1415/(count2)))*(count2)*10+(repromatrix[j][1]-48)*5/2,
                        (qSin((j+1)*2*3.1415/(count2)))*(count2)*10+(repromatrix[j][1]-48)*5/2);
                scene->addItem(lineitem);
            }
            if(readjmatrix[i][j]==1&&i>=(r-65)){
                lineitem->setLine((qCos((i+1)*2*3.1415/(count2)))*(count2)*10+(repromatrix[i][1]-48)*5/2,
                        (qSin((i+1)*2*3.1415/(count2)))*(count2)*10+(repromatrix[i][1]-48)*5/2,
                        (qCos((j+1)*2*3.1415/(count2)))*(count2)*10+(repromatrix[j][1]-48)*5/2,
                        (qSin((j+1)*2*3.1415/(count2)))*(count2)*10+(repromatrix[j][1]-48)*5/2);
                scene->addItem(lineitem);
            }
        }

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);
}

void Graph2::on_pushButton_2_clicked()
{
    this->close();
}
