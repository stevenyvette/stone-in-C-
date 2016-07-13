#include "reshape.h"
#include "ui_reshape.h"
#include "networklethality.h"
#include <QtWidgets>
#include <iostream>
#include <cmath>


int **readjmatrix;
char **repromatrix;
extern int count2;
extern int **adjmatrix;
extern char **promatrix;
extern char *candidate;
extern char V;
extern char R;
extern int predict;

Reshape::Reshape(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reshape)
{
    ui->setupUi(this);
}

Reshape::~Reshape()
{
    delete ui;
}

void Reshape::inti(){
    ui->remove_label->setText(QString(R));
    if(predict>=0)
        ui->replace_label->setText(QString(char(predict+65)));
    ui->remove_label->setStyleSheet("color:red; font: 75 24pt");
    ui->replace_label->setStyleSheet("color:red; font: 75 24pt");
}

//退出
void Reshape::on_quit_clicked()
{
    this->close();
}


//确定
void Reshape::on_confirm_clicked()
{
    QGraphicsScene *scene = new QGraphicsScene;
    QString num="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0;i<count2;i++){
        scene->addEllipse((qCos(i*2*3.1415/count2))*count2*10,(qSin(i*2*3.1415/count2))*count2*10,
                          (promatrix[i][1]-48)*5,(promatrix[i][1]-48)*5,QPen(Qt::cyan),QBrush(Qt::cyan));
        QGraphicsTextItem *txtitem = new QGraphicsTextItem(QString(num[i]));
        txtitem->setPos((qCos(i*2*3.1415/count2))*count2*10-10,(qSin(i*2*3.1415/count2))*count2*10-10);
        txtitem->setDefaultTextColor(Qt::red);
        scene->addItem(txtitem);
    }

    for(int i=0;i<count2;i++)
        for(int j=i;j<count2;j++){
            QGraphicsLineItem *lineitem=new QGraphicsLineItem;
            lineitem->setPen(QPen(Qt::blue));
            if(adjmatrix[i][j]==1){
                scene->addLine((qCos(i*2*3.1415/count2))*count2*10+(promatrix[i][1]-48)*5/2,
                        (qSin(i*2*3.1415/count2))*count2*10+(promatrix[i][1]-48)*5/2,
                        (qCos(j*2*3.1415/count2))*count2*10+(promatrix[j][1]-48)*5/2,
                        (qSin(j*2*3.1415/count2))*count2*10+(promatrix[j][1]-48)*5/2);
                scene->addItem(lineitem);
            }
        }

    ui->showgraph->setScene(scene);
    ui->showgraph->setDragMode(QGraphicsView::ScrollHandDrag);

    readjmatrix= new int *[count2-1];
    for(int i = 0;i < count2-1;i++)
        readjmatrix[i] = new int[count2-1];

    repromatrix = new char *[count2-1];
    for(int i = 0;i < count2-1;i++)
        repromatrix[i] = new char[count2-1];
    QFile reset("reshapefile.txt");
    reset.open(QIODevice::WriteOnly |QIODevice::Text);
    reset.close();

    QString a="Network lethality of the first measurement is :\n"+QString::number(Lethality1(count2),'f',0);
    QString b="Network lethality of the second measurement is :"+QString::number(Lethality2(count2),'f',0);
    ui->origin_info->append(a);
    ui->origin_info->append(b);

    ui->origin_adj->append("The original Adjacency Matrix is :");
    ui->origin_adj->append("");

    QString num1="*ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0;i<=count2;i++){
        QString tmp=QString(num1[i]);
        QString t = tmp.append("\t\t");
        ui->origin_adj->moveCursor(QTextCursor::End);
        ui->origin_adj->textCursor().insertHtml(t);
        ui->origin_adj->moveCursor(QTextCursor::End);
    }
    ui->origin_adj->append("");

    for(int i=0;i<count2;i++){
        ui->origin_adj->moveCursor(QTextCursor::End);
        QString a=QString(num1[i+1]);
        a=a.append("\t\t");
        ui->origin_adj->textCursor().insertHtml(a);
        for(int j=0;j<count2;j++){
            ui->origin_adj->moveCursor(QTextCursor::End);
            if(adjmatrix[i][j]==1)
                ui->origin_adj->textCursor().insertHtml("1  ");
            else
                ui->origin_adj->textCursor().insertHtml("0  ");
            ui->origin_adj->moveCursor(QTextCursor::End);
        }
        ui->origin_adj->append("");
    }

    ui->origin_pro->append("The original Property Matrix is :");
    ui->origin_pro->append("N W R C V D");
    ui->origin_pro->append("");

    QFile outfile("outfile.txt");
    outfile.open(QFile::ReadOnly | QFile::Text);
    QTextStream test(&outfile);
    int n=0;
    QString t;
    while (!test.atEnd()) {
        n+=1;
        t = test.readLine();
        if(n>(count2+7)&&n<(8+2*count2)){
            ui->origin_pro->textCursor().insertHtml(t);
            ui->origin_pro->append("");
        }
    }

    ui->origin_pro->append("N: Node");
    ui->origin_pro->append("W: Weight");
    ui->origin_pro->append("R: Role");
    ui->origin_pro->append("C: Capacity");
    ui->origin_pro->append("V: Violence");
    ui->origin_pro->append("D: Degree");

/*
    for(int i=0;i<count2;i++){
        if(candidate[i]!=char(0)&&candidate[i]==V){
            ReshapeAdj(candidate[i],R,count2);
            ReshapePro(candidate[i],R,count2);
        }
    }
*/
    for(int i=0;i<count2;i++){
        if(candidate[i]!=char(0)&&candidate[i]!=V){
            ReshapeAdj(candidate[i],R,count2);
            ReshapePro(candidate[i],R,count2);
        }
        if(candidate[i]==char(predict+65)){
            QString c = "Reshaped Network lethality of the first measurement is : "+QString::number(reLethality1(count2),'f',0);
            QString d = "Reshaped Network lethality of the second measurement is : "+QString::number(reLethality2(count2),'f',0);
            ui->reshape_info->append(c);
            ui->reshape_info->append(d);
        }
    }

    QFile reshapefile("reshapefile.txt");
    reshapefile.open(QFile::ReadOnly | QFile::Text);
    QTextStream show(&reshapefile);
    int m=0;
    QString q;
    while (!show.atEnd()) {
        m+=1;
        q = show.readLine();
        if(m<(3+count2)){
            ui->reshape_adj->textCursor().insertHtml(q);
            ui->reshape_adj->append("");
        }
        if(m>(3+count2)&&m<(6+2*count2)){
            ui->reshape_pro->textCursor().insertHtml(q);
            ui->reshape_pro->append("");
        }
        if(m>(8+2*count2)){
            ui->reshape_more->textCursor().insertHtml(q);
            ui->reshape_more->append("");
        }
    }

    ui->reshape_pro->append("N: Node");
    ui->reshape_pro->append("W: Weight");
    ui->reshape_pro->append("R: Role");
    ui->reshape_pro->append("C: Capacity");
    ui->reshape_pro->append("V: Violence");
    ui->reshape_pro->append("D: Degree");
}


void Reshape::ReshapeAdj(char v,char r,int count2){
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

    QFile reshapefile("reshapefile.txt");
    reshapefile.open(QIODevice::WriteOnly | QIODevice::ReadOnly | QIODevice::Append | QIODevice::Text);
    QTextStream reshapeout(&reshapefile);

    reshapeout<<"The Adjacency Matrix when vertex "<<r<<" is replaced by vertex "<<v<<" is:"<<endl<<endl;

    QString num1="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    reshapeout<<"* ";
    for(int i=0;i<count2-1;i++){
        if(i<(r-65))
            reshapeout<<num1[i]<<" ";
        else
            reshapeout<<num1[i+1]<<" ";
    }
    reshapeout<<"\n";


    for(int k=0;k<count2-1;k++){
        if(k<(r-65))
            reshapeout<<num1[k]<<" ";
        else
            reshapeout<<num1[k+1]<<" ";
        for(int m=0;m<count2-1;m++)
            reshapeout<<readjmatrix[k][m]<<" ";
        reshapeout<<"\n";
    }

    reshapeout<<"\n";
    reshapefile.close();


}


void Reshape::ReshapePro(char v,char r,int count2){

    for(int i=0;i<count2-1;i++)
        for(int j=0;j<count2-1;j++)
            repromatrix[i][j] = ' ';

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


    QFile reshapefile("reshapefile.txt");
    reshapefile.open(QIODevice::WriteOnly | QIODevice::ReadOnly | QIODevice::Append | QIODevice::Text);
    QTextStream reshapeout(&reshapefile);

    reshapeout<<"The Property Matrix when vertex	"<<r<<" is replaced by vertex "<<v<<" is:\n\n";
    reshapeout<<"N W R C V D\n";

    for(int i=0;i<count2-1;i++){
        for(int j=0;j<6;j++)
            reshapeout<<repromatrix[i][j]<<" ";
        reshapeout<<"\n";
    }

    reshapeout<<"\n\n\n";

    reshapefile.close();
}

void Reshape::on_showorigingraph_clicked()
{
    origin.show();
}

void Reshape::on_showreshapegraph_clicked()
{
    reshape.show();
}
