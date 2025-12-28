#include<stdio.h>
int main(){
    int Num,Yasegimi=0,Normal=0,Hutorigimi=0;
    scanf("%d",&Num);
    float Data[Num][4],sumHei,sumWei,aveHei,aveWei;
    int YaseNum[Num],NorNum[Num],HutoNum[Num];
    sumHei=0;
    sumWei=0;
    for(int i=0; i<Num; i++)
    {
        scanf("%f,%f,%f",&Data[i][0],&Data[i][1],&Data[i][2]);
        sumWei+=Data[i][1];
        sumHei+=Data[i][2];
        Data[i][3]=1000000.0*Data[i][1]/(Data[i][2]*Data[i][2]*Data[i][2]);
    }
    aveHei=sumHei/Num;
    aveWei=sumWei/Num;
    printf("身長の平均: %f\n",aveHei);
    printf("体重の平均: %f\n",aveWei);
    for(int i=0; i<Num; i++)
    {
        if(Data[i][3]<=12)
        {
            YaseNum[Yasegimi]=(int)Data[i][0];
            Yasegimi++;
        }
        else if(Data[i][3]<=14)
        {
            NorNum[Normal]=(int)Data[i][0];
            Normal++;
        }
        else
        {
            HutoNum[Hutorigimi]=(int)Data[i][0];
            Hutorigimi++;
        }
    }
    printf("やせぎみの人数: %d\n",Yasegimi);
    printf("ふつうの人数: %d\n",Normal);
    printf("ふとりぎみの人数: %d\n",Hutorigimi);
    printf("Yasegimi:");
    for(int i=0; i<Yasegimi; i++)
    {
        printf("No.%d ",YaseNum[i]);
    }
    printf("\nFutsu:");
    for(int i=0; i<Normal; i++)
    {
        printf("No.%d ",NorNum[i]);
    }
    printf("\nFutorigimi:");
    for(int i=0; i<Hutorigimi; i++)
    {
        printf("No.%d ",HutoNum[i]);
    }
}