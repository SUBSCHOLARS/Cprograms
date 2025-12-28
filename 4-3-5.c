#include<stdio.h>
int main()
{
    int Data[12][2],sum=0,aboveAve=0;
    float ave;
    for(int i=0; i<12; i++)
    {
       scanf("%d,%d",&Data[i][0],&Data[i][1]);
       printf("No.%d Snow Amount: %d\n",Data[i][0],Data[i][1]);
       sum+=Data[i][1];
    }
    ave=(float)sum/12;
    printf("Average: %f\n",ave);
    printf("積雪量が平均以上のスキー場のリスト\n");
    for(int i=0; i<12; i++)
    {
        if((float)Data[i][1]>=ave)
        {
            aboveAve++;
            printf("No.%d has %d, which is above average\n",Data[i][0],Data[i][1]);
        }
    }
    printf("積雪量が平均以上のスキー場の数: %d\n",aboveAve);
}