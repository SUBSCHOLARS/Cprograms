#include<stdio.h>
int main(){
    int MinsData[14][2],sum;
    float per[14];
    sum=0;
    for(int i=0; i<14; i++)
    {
        scanf("%d,%d",&MinsData[i][0],&MinsData[i][1]);
        sum+=MinsData[i][1];
    }
    printf("No. Percent\n");
    for(int i=0; i<14; i++)
    {
        per[i]=100*(float)MinsData[i][1]/sum;
        printf("%d,%f\n",MinsData[i][0],per[i]);
    }
    printf("30人以上の省庁の番号と人数\n");
    for(int i=0; i<14; i++)
    {
        if(MinsData[i][1]>=30)
        {
            printf("%d,%d\n",MinsData[i][0],MinsData[i][1]);
        }
    }
}