#include<stdio.h>
int main(){
    int Num,Yasegimi=0,Normal=0,Hutorigimi=0,HigherHei=0,HigherWei=0;
    scanf("%d",&Num);
    float Data[Num][3],sumHei,sumWei,aveHei,aveWei;
    sumHei=0;
    sumWei=0;
    for(int i=0; i<Num; i++)
    {
        scanf("%f,%f",&Data[i][0],&Data[i][1]);
        sumWei+=Data[i][0];
        sumHei+=Data[i][1];
        Data[i][2]=1000000.0*Data[i][0]/(Data[i][1]*Data[i][1]*Data[i][1]);
    }
    aveHei=sumHei/Num;
    aveWei=sumWei/Num;
    printf("身長の平均: %f\n",aveHei);
    printf("体重の平均: %f\n",aveWei);
    for(int i=0; i<Num; i++)
    {
        if(Data[i][2]<=12)
        {
            Yasegimi++;
        }
        else if(Data[i][2]<=14)
        {
            Normal++;
        }
        else
        {
            Hutorigimi++;
        }
        if(Data[i][0]>aveWei)
        {
            HigherWei++;
        }
        if(Data[i][1]>aveHei)
        {
            HigherHei++;
        }
    }
    printf("やせぎみの人数: %d\n",Yasegimi);
    printf("ふつうの人数: %d\n",Normal);
    printf("ふとりぎみの人数: %d\n",Hutorigimi);
    printf("身長が平均を超えている人の数: %d\n",HigherHei);
    printf("体重が平均を超えている人の数: %d\n",HigherWei);
}