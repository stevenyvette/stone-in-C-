#include "stone.h"
#include "ui_stone.h"
#include <QQueue>

extern char *candidate;
extern int count2;
extern int k;

extern double Lethality1(int count2);
extern double Lethality2(int count2);
extern double reLethality1(int count);
extern double reLethality2(int count);
extern double reLethality11(int count);
extern double reLethality21(int count);

extern int **adjmatrix;
extern char **promatrix;
extern int **readjmatrix1;
extern char **repromatrix1;

stone::stone(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stone)
{
    ui->setupUi(this);
}

void stone::on_back_clicked()
{
    this->close();
}

void stone::on_go_clicked()
{
    QString w="       LEV1          LEV2        \n"
            "---------------------------------";
    ui->reshape->append(w);
    double LEV,LEV2;

    for(int a=0;a<count2;a++){
        LEV=0;
        LEV2=0;
        for(int i = 0;i < count2;i++)
            candidate[i] = 0;
        bool flag=false;
        for(int i=0;i<count2;i++)
            if(i!=a)
                if(promatrix[i][1]<=promatrix[a][1])
                    if(Dijkstra(char(i+65),(a+65),count2)<=k)
                        if(WRP(char(i+65),(a+65),count2)>=0){
                            candidate[i]=char(i+65);
                            flag=true;
                        }

        if(!flag){
            QString b= QString(char(a+65))+"        no possible world";
            ui->reshape->append(b);
        }
//
        else{            
            for(int r=0;r<count2;r++){
                if(candidate[r]!=char(0)){
                    for(int z=0;z<count2-1;z++)
                        for(int x=0;x<count2-1;x++)
                            readjmatrix1[z][x]=0;

                    for(int z=0;z<count2-1;z++)
                        for(int x=0;x<count2-1;x++)
                            repromatrix1[z][x] = ' ';
//*/
                    for(int z=0;z<count2;z++){
                        for(int x=0;x<count2;x++){
                            if(z<a&&x<a)
                                readjmatrix1[z][x]=adjmatrix[z][x];
                            if(z<a&&x>a)
                                readjmatrix1[z][x-1]=adjmatrix[z][x];
                            if(z>a&&x<a)
                                readjmatrix1[z-1][x]=adjmatrix[z][x];
                            if(z>a&&x>a)
                                readjmatrix1[z-1][x-1]=adjmatrix[z][x];
                        }
                    }

                    for(int z=0;z<count2;z++){
                        if(adjmatrix[z][a]==1&&r<a&&z<a&&z!=(r)){
                            readjmatrix1[z][r]=1;
                            readjmatrix1[r][z]=1;
                        }
                        if(adjmatrix[z][a]==1&&r<a&&z>a&&z!=(r)){
                            readjmatrix1[z-1][r]=1;
                            readjmatrix1[r][z-1]=1;
                        }
                        if(adjmatrix[z][a]==1&&r>a&&z<a&&z!=(r)){
                            readjmatrix1[z][r-1]=1;
                            readjmatrix1[r-1][z]=1;
                        }
                        if(adjmatrix[z][a]==1&&r>a&&z>a&&z!=(r)){
                            readjmatrix1[z-1][r-1]=1;
                            readjmatrix1[r-1][z-1]=1;
                        }
                    }

                    for(int z=0;z<count2;z++){
                        for(int x=0;x<count2;x++){
                            if(z<a)
                                repromatrix1[z][x]=promatrix[z][x];
                            if(z>a)
                                repromatrix1[z-1][x]=promatrix[z][x];
                        }
                        if(z==(r)&&z<a)
                            repromatrix1[z][1]=promatrix[a][1];
                        if(z==(r)&&z>a)
                            repromatrix1[z-1][1]=promatrix[a][1];
                    }

                    for(int z=0;z<count2-1;z++){
                        int tmp=0;
                        for(int x=0;x<count2-1;x++)
                            if(readjmatrix1[z][x]==1)
                                tmp+=1;
                        repromatrix1[z][5]=tmp+48;
                    }
//*/
                }
                LEV+=ReplaceProbability(candidate[r],char(a+65),count2)*reLethality11(count2);
                LEV2+=ReplaceProbability(candidate[r],char(a+65),count2)*reLethality21(count2);
            }
            QString b= QString(char(a+65))+"       "+QString::number(LEV,'f',0)+
                    "            "+QString::number(LEV2,'f',0);
            ui->reshape->append(b);
        }
//
        ui->reshape->append("");
    }
}

int stone::NeighbourNumber(char v, char r, int count2){
    int tmp=0;

    for(int j=0;j<count2;j++)
        if(adjmatrix[j][v-65]==1&&j!=(r-65))
            tmp+=1;

    return tmp;
}

//计算WRP（weighted removal pagerank）
double stone::WRP(char v, char r, int count2){
    int totalweight=0;
    double wrp=0;
    int singleweight=promatrix[v-65][1]-48; // weight of v

    for(int i=0;i<count2;i++)
        totalweight+=(promatrix[i][1]-48);  //total weight of all vertices

    totalweight-=(promatrix[r-65][1]-48); //total weight of all vertices except r

    wrp+=(1-t1)*singleweight/totalweight;

    for(int j=0;j<count2;j++)
        if(j!=(r-65)&&adjmatrix[v-65][j]==1){
            char k=65+j;
            wrp+=t1/((count2-1)*NeighbourNumber(k,r,count2));
        }
    return wrp;
}

//计算replacement value
double stone::ReplacementValue(char v,char r,int count2){
    double rv=0;
    double a[2]={0.8,0.2};

    rv = a[0]*WRP(v,r,count2);

    for(int i=1;i<2;i++)
        rv += a[i]*(promatrix[v-65][1]-48);

    return rv;
}

//
int stone::Dijkstra(char v,char r,int n)        //Dijkstra算法，传入源顶点
{
    int parent[maxn1];           //每个顶点的父亲节点，可以用于还原最短路径树
    bool visited[maxn1];         //用于判断顶点是否已经在最短路径树中，或者说是否已找到最短路径
    node d[maxn1];               //源点到每个顶点估算距离，最后结果为源点到所有顶点的最短路。

    for(int i = 1; i <= n; i++)     //初始化
    {
        d[i].id = i;
        d[i].weight = INF1;          //估算距离置INF
        parent[i] = -1;             //每个顶点都无父亲节点
        visited[i] = false;
     }

     d[v-64].weight = 0;                //源点到源点最短路权值为0
     p.append(d[v-64]);                   //压入队列中

     while(!p.empty())               //算法的核心，队列空说明完成了操作
     {
         node cd = p.front();
         //node cd = p.top();          //取最小估算距离顶点
         p.pop_front();

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
                parent[j] = u;
                p.append(d[j]);
            }
        }
     }
     return d[r-64].weight;
}

double stone::ReplaceProbability(char v,char r,int count2){
    double p=0,tmp=0;

    for(int i=0;i<count2;i++)
        if(candidate[i]==char(i+65))
            tmp+=ReplacementValue(char(i+65),r,count2);

    if(candidate[v-65]!=char(0))
        p=ReplacementValue(v,r,count2)/tmp;
    else
        p=0;

    return p;
}

stone::~stone()
{
    delete ui;
}
