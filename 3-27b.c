#include<stdio.h>
int main(){
    printf("       ");
    for(int k=0; k<9; k++)
    {
        printf("' %d '",k+1);
    }
    printf("\n");
    for(int i=0; i<9; i++)
    {
        printf("' %d '",i+1);
        for(int j=0; j<9; j++)
        {
            printf("%5d",(i+1)*(j+1));
        }
        printf("\n");
    }
}