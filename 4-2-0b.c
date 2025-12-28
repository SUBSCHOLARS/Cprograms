#include<stdio.h>
int main(){
    int arry[3][5];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("Input x[%d][%d]=?",i,j);
            scanf("%d",&arry[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        int xmax=arry[i][0];
        for(int j=1; j<5; j++)
        {
            if(xmax<arry[i][j])
            {
                xmax=arry[i][j];
            }
        }
        printf("Max in row-%d: %d\n",i,xmax);
    }
}