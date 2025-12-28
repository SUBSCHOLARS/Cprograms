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
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("[%d][%d]=%d\n",i,j,arry[i][j]);
        }
    }
}