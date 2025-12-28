#include<stdio.h>
int main(){
    int arry[2][3];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("[%d][%d]=?",i,j);
            scanf("%d",&arry[i][j]);
        }
    }
    int sum[2];
    for(int i=0; i<2; i++)
    {
        sum[i]=0;
        for(int j=0; j<3; j++)
        {
            sum[i]=sum[i]+arry[i][j];
        }
        printf("%d-row(sum):%d\n",i,sum[i]);
    }
}