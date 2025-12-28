#include<stdio.h>
int main(){
    int N=5;
    int arry[5];
    for(int i=0; i<5; i++)
    {
        printf("Please input arry[%d]=",i);
        scanf("%d",&arry[i]);
    }
    int xmax=arry[0];
    for(int i=1; i<5; i++)
    {
        if(xmax<arry[i])
        {
            xmax=arry[i];
        }
    }
    printf("Max is %d",xmax);
}