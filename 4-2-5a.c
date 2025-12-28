#include<stdio.h>
int main()
{
    int SkiNum[12],Snow[12],max,maxnum,Subt[12];
    for(int i=0; i<12; i++)
    {
       scanf("%d,%d",&SkiNum[i],&Snow[i]);
       printf("No.%d Snow Amount: %d\n",SkiNum[i],Snow[i]);
    }
    max=Snow[0];
    maxnum=SkiNum[0];
    for(int i=1; i<12; i++)
    {
        if(Snow[i]>max)
        {
            max=Snow[i];
            maxnum=SkiNum[i];
        }
    }
    for(int i=0; i<12; i++)
    {
        Subt[i]=Snow[i]-max;
    }
    printf("\n");
    printf("No.%d has the largest snow amount: %d\n",maxnum,max);
    printf("各スキー場について最大値との差\n");
    for(int i=0; i<12; i++)
    {
        printf("No.%d Subtracted Value: %d\n",SkiNum[i],-Subt[i]);
    }

}