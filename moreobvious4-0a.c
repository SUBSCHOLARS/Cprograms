#include<stdio.h>
int main(){
    int array[2][3];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("[%d][%d]=?",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("[%d][%d]=%d",i,j,array[i][j]);
            if(j==2)
            {
                printf("\n");
            }
        }
    }
}