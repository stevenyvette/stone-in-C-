#ifndef NETWORKLETHALITY
#define NETWORKLETHALITY

extern char **promatrix;
extern char **repromatrix;
extern char **repromatrix1;

//原网络杀伤力1
double Lethality1(int count2){
    double L1 = 0;

    for(int i=0;i<count2;i++){
        if(promatrix[i][4]-48==2)
            L1 += (promatrix[i][1]-48);
        if(promatrix[i][4]-48==0)
            L1 -= (promatrix[i][1]-48);
    }
    return L1;
}

//原网络杀伤力2
double Lethality2(int count2){
    double L2 = 0;

    for(int i=0;i<count2;i++){
        if(promatrix[i][4]-48==2)
            L2 += (promatrix[i][1]-48)*(promatrix[i][5]-48);
        if(promatrix[i][4]-48==0)
            L2 -= (promatrix[i][1]-48)*(promatrix[i][5]-48);
    }
    return L2;
}

//现网络杀伤力1
double reLethality1(int count){
    double L1 = 0;

    for(int i=0;i<count-1;i++){
        if(repromatrix[i][4]-48==2)
            L1 += (repromatrix[i][1]-48);
        if(repromatrix[i][4]-48==0)
            L1 -= (repromatrix[i][1]-48);
    }
    return L1;
}

//现网络杀伤力2
double reLethality2(int count){
    double L2 = 0;

    for(int i=0;i<count-1;i++){
        if(repromatrix[i][4]-48==2)
            L2 += (repromatrix[i][1]-48)*(repromatrix[i][5]-48);
        if(repromatrix[i][4]-48==0)
            L2 -= (repromatrix[i][1]-48)*(repromatrix[i][5]-48);
    }

    return L2;
}

double reLethality11(int count){
    double L1 = 0;

    for(int i=0;i<count-1;i++){
        if(repromatrix1[i][4]-48==2)
            L1 += (repromatrix1[i][1]-48);
        if(repromatrix1[i][4]-48==0)
            L1 -= (repromatrix1[i][1]-48);
    }

    return L1;
}

//现网络杀伤力21
double reLethality21(int count){
    double L2 = 0;

    for(int i=0;i<count-1;i++){
        if(repromatrix1[i][4]-48==2)
            L2 += (repromatrix1[i][1]-48)*(repromatrix1[i][5]-48);
        if(repromatrix1[i][4]-48==0)
            L2 -= (repromatrix1[i][1]-48)*(repromatrix1[i][5]-48);
    }

    return L2;
}

#endif // NETWORKLETHALITY

