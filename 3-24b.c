#include<stdio.h>
int main(){
    for(int i=0; i<=10; i++)
    {
        for(int j=0; j<=10; j++)
        {
            printf("(%2d,%2d)",i,j);
        }
        printf("\n");
    }
}