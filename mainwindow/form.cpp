#include "form.h"
#include "ui_TSP.h"
#include "mainwindow.h"
#include <QtDebug>
#include <QApplication>
#include <QtWidgets>
#include <string>
#include <QQueue>

extern double Lethality1(int count2);
extern double Lethality2(int count2);
extern void showgraph();
int count2;
int **adjmatrix;
char **promatrix;
int **readjmatrix1;
char **repromatrix1;
char *candidate;
char V;
char R;
int predict=-1;
int k=1;
double max;


Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

}

//退出
void Form::on_exit_clicked()
{
    this->close();
}


//确定移除的节点
void Form::on_remove_textEdited(const QString &arg3)
{
    R = arg3[0].unicode();
}

//进行计算
void Form::on_confirm_remove_clicked()
{
    ui->result_info->append("Vertix to remove: "+QString(R));
    //ui->result_info->append("Vertix to replace: "+QString(V));
    ui->result_info->append("");

    max=0;
    predict=-1;

    POCC(count2);
    Candidate(R,k,count2);

    QString e="       WRP       rv(v,r)     p\n"
              "------------------------------------";
    ui->result_cal->append(e);

    for(int i=0;i<count2;i++)
        if(i!=(R-65)){
            QString c="  "+QString(char(i+65))+"   "
                    +QString::number(WRP(char(i+65),R,count2),'f',4)+"     "
                    +QString::number(ReplacementValue(char(i+65),R,count2),'f',4)+"    "
                    +QString::number(ReplaceProbability(char(i+65),R,count2),'f',4);
            ui->result_cal->append(c);
        }
    ui->result_cal->append("------------------------------------");

    if(predict>-1){
        QString f="By TSP, vertex "+ QString(char(predict+65))
                +" is the best candidate \n"
                 "which means it is most likely to replace vertex "+QString(R)+" .";

        ui->result_cal->append(f);
        ui->result_info->append(f);
        ui->best->setText(QString(char(predict+65)));
        ui->best->setStyleSheet("color:red; font: 75 24pt");
    }
    else{
        QString f="By TSP, there is no candidate vertex to replace vertex "+QString(R)+" .";

        ui->result_cal->append(f);
        ui->result_info->append(f);
        ui->best->setText("None");
        ui->best->setStyleSheet("color:red; font: 75 16pt");
    }
}

//读取结构文件+输出整理后的邻接矩阵
void Form::on_openadj_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    if (!fileName.isEmpty())
        loadAdjFile(fileName);
}

void Form::loadAdjFile(const QString &fileName)
{
    QFile file(fileName);
    QFile outfile("outfile.txt");
    outfile.open(QIODevice::WriteOnly | QIODevice::Text);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("Application"),
                             tr("Cannot read file %1:\n%2.")
                             .arg(fileName)
                             .arg(file.errorString()));
        return;
    }
    QTextStream out(&outfile);
    QTextStream in(&file);

    count2=-1;
    while (!in.atEnd()) {
        QString words = in.readLine();
        char NodeA;    //顶点A
        char NodeB;    //顶点B

        NodeA = words[0].unicode();
        NodeB = words[2].unicode();

        int row = NodeA-65;
        int column = NodeB-65;

        if(row>count2)
            count2=row;
        if(column>count2)
            count2=column;
    }
    count2+=1;
    ui->label_count->setText(QString::number(count2));
    ui->label_count->setStyleSheet("color:red; font: 75 24pt");

    adjmatrix= new int *[count2];
    for(int i = 0;i < count2;i++)
        adjmatrix[i] = new int[count2];
    for(int i=0;i<count2;i++)
        for(int j=0;j<count2;j++)
            adjmatrix[i][j]=0;

    promatrix = new char *[count2];
    for(int i = 0;i < count2;i++)
        promatrix[i] = new char[count2];
    for(int i=0;i<count2;i++)
        for(int j=0;j<count2;j++)
            promatrix[i][j] = ' ';

    candidate= new char[count2];
    for(int i = 0;i < count2;i++)
        candidate[i] = 0;

    readjmatrix1= new int *[count2-1];
    for(int i = 0;i < count2-1;i++)
        readjmatrix1[i] = new int[count2-1];
    for(int i=0;i<count2-1;i++)
        for(int j=0;j<count2-1;j++)
            readjmatrix1[i][j]=0;

    repromatrix1 = new char *[count2-1];
    for(int i = 0;i < count2-1;i++)
        repromatrix1[i] = new char[count2-1];
    for(int i=0;i<count2-1;i++)
        for(int j=0;j<count2-1;j++)
            repromatrix1[i][j] = ' ';



    QString m = "Number of vertice is : "+ QString::number(count2);
    ui->result_info->append(m);
    ui->result_info->append("");


    QString num1="*ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    out<<"The Adjacency Matrix is : \n";
    for(int i=0;i<=count2;i++){
        QChar tmp=num1[i];
        QString tmp2=QString(tmp);
        QString t = tmp2.append("\t\t");
        out<<num1[i]<<" ";
        ui->adjbrowser->moveCursor(QTextCursor::End);
        ui->adjbrowser->textCursor().insertHtml(t);
        ui->adjbrowser->moveCursor(QTextCursor::End);
    }
    out<<"\n";
    ui->adjbrowser->append("");

    QFile file2(fileName);
    file2.open(QFile::ReadOnly | QFile::Text);
    QTextStream in2(&file2);

    while (!in2.atEnd()) {
        QString words = in2.readLine();
        char NodeA;    //顶点A
        char NodeB;    //顶点B

        NodeA = words[0].unicode();
        NodeB = words[2].unicode();

        int row = NodeA-65;
        int column = NodeB-65;


        adjmatrix[row][column] = 1;
        adjmatrix[row][column] = 1;
        adjmatrix[column][row] = 1; 	//将有边的两点赋值为1，建立邻接矩阵
        adjmatrix[column][row] = 1;
    }

    for(int i=0;i<count2;i++){
        ui->adjbrowser->moveCursor(QTextCursor::End);
        QChar a2=num1[i+1];
        QString a=QString(a2);//num1[i+1];
        a=a.append("\t\t");

        out<<num1[i+1]<<" ";
        ui->adjbrowser->textCursor().insertHtml(a);
        for(int j=0;j<count2;j++){
            ui->adjbrowser->moveCursor(QTextCursor::End);
            if(adjmatrix[i][j]==1){
                out<<"1 ";
                ui->adjbrowser->textCursor().insertHtml("1  ");
            }
            else{
                out<<"0 ";
                ui->adjbrowser->textCursor().insertHtml("0  ");
            }
            ui->adjbrowser->moveCursor(QTextCursor::End);
        }
        out<<"\n";
        ui->adjbrowser->append("");
    }
    out<<"\n\n\n";
}

//读取属性文件+输出整理后的属性矩阵
void Form::on_openpro_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    if (!fileName.isEmpty())
        loadProFile(fileName);
}

void Form::loadProFile(const QString &fileName)
{
    QFile outfile("outfile.txt");
    outfile.open(QIODevice::WriteOnly | QIODevice::ReadOnly | QIODevice::Append | QIODevice::Text);
    QTextStream out(&outfile);

    ui->probrowser->setWordWrapMode (QTextOption::NoWrap);

    out<<"The Property Matrix is :\n";
    out<<"Node    Weight    Role     Capacity Violence  Degree\n";
    ui->probrowser->moveCursor(QTextCursor::End);
    ui->probrowser->textCursor().insertHtml("N\tW\tR\tC\tV\tD");
    ui->probrowser->moveCursor(QTextCursor::End);

    ui->probrowser->append("");

    QFile file(fileName);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("Application"),
                             tr("Cannot read file %1:\n%2.")
                             .arg(fileName)
                             .arg(file.errorString()));
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString words = in.readLine();

        char Node;    //顶点
        int Weight;    //权重
        char Role;  //角色
        int Capacity;  //容量
        int Violence;  //2代表暴力，1代表中立，0代表反暴力
        int Degree;

        Node = words[0].unicode();
        Weight = words[2].unicode()-48;
        Role = words[4].unicode();
        Capacity = words[6].unicode()-48;
        Violence = words[8].unicode()-48;
        Degree = 0;

        int row = Node - 65;
        for(int i=0;i<count2;i++){
            if(adjmatrix[row][i]==1)
                Degree += 1;
        }

        promatrix[row][0] = Node;
        promatrix[row][1] = words[2].unicode(); 	//权重列
        promatrix[row][2] = Role;     //角色列
        promatrix[row][3] = words[6].unicode(); //容量列
        promatrix[row][4] = words[8].unicode();  //暴力属性列
        promatrix[row][5] = Degree+48;   //度列
    }

    for(int i=0;i<count2;i++){
        for(int j=0;j<count2;j++){
            QChar b2=promatrix[i][j];
            QString b=QString(b2);//promatrix[i][j];
            out<<"  "<<b<<"      ";
        }
        out<<"\n";
    }

    out<<"\n\n\n";

    outfile.close();

    outfile.open(QFile::ReadOnly | QFile::Text);
    QTextStream test(&outfile);
    int n=0;
    QString t;
    while (!test.atEnd()) {
        n+=1;
        t = test.readLine();
        if(n>(7+count2)&&n<(8+2*count2)){
            ui->probrowser->textCursor().insertHtml(t);
            ui->probrowser->append("");
        }
    }

    ui->probrowser->append("N: Node");
    ui->probrowser->append("W: Weight");
    ui->probrowser->append("R: Role");
    ui->probrowser->append("C: Capacity");
    ui->probrowser->append("V: Violence");
    ui->probrowser->append("D: Degree");

    QString a="Network lethality of the first measurement is :"+QString::number(Lethality1(count2),'f',0);
    QString b="Network lethality of the second measurement is :"+QString::number(Lethality2(count2),'f',0);
    ui->result_info->append(a);
    ui->result_info->append(b);
    ui->result_info->append("");
}

//计算节点的度数
int Form::NeighbourNumber(char v, char r, int count2){
    int tmp=0;
    for(int j=0;j<count2;j++){
        if(adjmatrix[j][v-65]==1&&j!=(r-65))
            tmp+=1;
    }
    return tmp;
}

//计算WRP（weighted removal pagerank）
double Form::WRP(char v, char r, int count2){
    int totalweight=0;
    double wrp=0;
    int singleweight=promatrix[v-65][1]-48; // weight of v

    for(int i=0;i<count2;i++)
        totalweight+=(promatrix[i][1]-48);  //total weight of all vertices

    totalweight-=(promatrix[r-65][1]-48); //total weight of all vertices except r

    wrp+=(1-t)*singleweight/totalweight;

    for(int j=0;j<count2;j++){
        if(j!=(r-65)&&adjmatrix[v-65][j]==1){
            char k=65+j;
            wrp+=t/((count2-1)*NeighbourNumber(k,r,count2));
        }
    }
    return wrp;
}

//计算replacement value
double Form::ReplacementValue(char v,char r,int count2){
    double rv=0;
    double a[2]={0.8,0.2};

    rv = a[0]*WRP(v,r,count2);

    for(int i=1;i<2;i++){
        rv += a[i]*(promatrix[v-65][1]-48);
    }

    return rv;
}

//
int Form::Dijkstra(char v,char r,int n)        //Dijkstra算法，传入源顶点
{
    int parent[maxn];           //每个顶点的父亲节点，可以用于还原最短路径树
    bool visited[maxn];         //用于判断顶点是否已经在最短路径树中，或者说是否已找到最短路径
    node d[maxn];               //源点到每个顶点估算距离，最后结果为源点到所有顶点的最短路。

    for(int i = 1; i <= n; i++)     //初始化
    {
        d[i].id = i;
        d[i].weight = INF;          //估算距离置INF
        parent[i] = -1;             //每个顶点都无父亲节点
        visited[i] = false;
     }

     d[v-64].weight = 0;                //源点到源点最短路权值为0
     q.append(d[v-64]);                   //压入队列中

     while(!q.empty())               //算法的核心，队列空说明完成了操作
     {
         node cd = q.front();
         //node cd = q.top();          //取最小估算距离顶点
         q.pop_front();

         int u = cd.id;

         if(visited[u])
             continue;

         visited[u] = true;

         //松弛操作

         for(int j = 1; j <= n; j++) //找所有与他相邻的顶点，进行松弛操作，更新估算距离，压入队列。
         {
             if(j != u && !visited[j] && d[j].weight > d[u].weight+adjmatrix[u-1][j-1]&&adjmatrix[u-1][j-1]!=0)
             {
                d[j].weight = d[u].weight+adjmatrix[u-1][j-1];
                //cout<<j<<" "<<d[j].weight<<endl;
                parent[j] = u;
                q.append(d[j]);
            }
        }
     }
     return d[r-64].weight;
}

double Form::POCC(int count2){
    double pocc;
    int *a;

    a = new int[count2];
    for(int i = 0;i < count2;i++)
        a[i] = 0;

    for(int i=0;i<count2;i++){ //i为目标点
        double num1=0,num2=0;

        for(int j=0;j<count2;j++){ //其余点到i的距离
            if((Dijkstra(char(65+j),char(65+i),count2)<=k)&&(j!=i)){
                a[j]+=1;
                num1+=1;
            }
        }

        for(int p=0;p<count2-1;p++){
            for(int m=p+1;m<count2;m++){
                if((a[p]==1)&&(a[m]==1)&&(adjmatrix[p][m]==1))
                    num2+=1;
            }
        }

        if(num2<=1){
            QString a="POCC of Vertix "+QString(char(65+i))+" is: 0";
            ui->result_pocc->append(a);
            //cout<<"POCC of Vertix "<<char(65+i)<<" is: 0"<<endl;
        }
        else{
            pocc=2*num2/(num1*(num1-1));
            QString a="POCC of Vertix "+QString(char(65+i))+" is: "+QString::number(pocc);
            ui->result_pocc->append(a);
            //cout<<"POCC of Vertix "<<char(65+i)<<" is: "<<pocc<<endl;
        }

        for(int l=0;l<count2;l++)
            a[l]=0;

    }

    delete []a;

    return pocc;
}

//重置
void Form::on_reset_clicked()
{
    for(int i=0;i<count2;i++)
        for(int j=0;j<count2;j++)
            adjmatrix[i][j]=0;

    for(int i=0;i<count2;i++)
        for(int j=0;j<count2;j++)
            promatrix[i][j] = ' ';

    for(int i = 0;i < count2;i++)
        candidate[i] = 0;
    predict = -1;
}

//候选节点
void Form::Candidate(char r,int k,int count2){
    bool flag=false;
    for(int i = 0;i < count2;i++)
        candidate[i] = 0;

    for(int i=0;i<count2;i++){
        if(i!=(r-65))
            if(promatrix[i][1]<=promatrix[r-65][1])
                if(Dijkstra(char(i+65),r,count2)<=k)
                    if(WRP(char(i+65),r,count2)>=0){                        
                        candidate[i]=char(i+65);
                        flag=true;
                    }
    }

    if(!flag){
        QString a = "There is no candidate for the node "+QString(R);
        ui->result_cal->append(a);
    }
    else{
        QString a = "The Candidate Set of node "+QString(R)+" is";
        ui->result_cal->append(a);

        QString b = "";
        for(int i=0;i<count2;i++)
            if(candidate[i]!=char(0))
                b = b + candidate[i] + " ";
        ui->result_cal->append(b);
    }
    ui->result_cal->append("");
}

double Form::ReplaceProbability(char v,char r,int count2){
    double p=0,tmp=0;

    for(int i=0;i<count2;i++){
        if(candidate[i]==char(i+65))
            tmp+=ReplacementValue(char(i+65),r,count2);
    }

    if(candidate[v-65]!=char(0)){
        p=ReplacementValue(v,r,count2)/tmp;
        if(p>max){
            predict=(v-65);
            max=p;
        }
    }    
    else
        p=0;
    return p;
}

Form::~Form()
{
    delete ui;
}


