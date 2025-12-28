#include<stdio.h>
int main()
{
    int Data[12][2],max,maxnum,Subt[12];
    for(int i=0; i<12; i++)
    {
       scanf("%d,%d",&Data[i][0],&Data[i][1]);
       printf("No.%d Snow Amount: %d\n",Data[i][0],Data[i][1]);
    }
    max=Data[0][1];
    for(int i=1; i<12; i++)
    {
        if(Data[i][1]>max)
        {
            max=Data[i][1];
            maxnum=Data[i][0];
        }
    }
    for(int i=0; i<12; i++)
    {
        Subt[i]=Data[i][1]-max;
    }
    printf("\n");
    printf("No.%d has the largest snow amount: %d",maxnum,max);
    printf("各スキー場について最大値との差\n");
    for(int i=0; i<12; i++)
    {
        printf("No.%d Subtracted Value: %d\n",Data[i][0],-Subt[i]);
    }
}