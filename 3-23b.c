#include<stdio.h>
int main(){
    printf("       ");
    for(int k=1; k<=9; k++)
    {
        printf("' %d '",k);
    }
    printf("\n");
    for(int i=1; i<=9; i++)
    {
        printf("' %d '",i);
        for(int j=1; j<=9; j++)
        {
            printf("%5d",i*j);
        }
        printf("\n");
    }
}