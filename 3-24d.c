#include<stdio.h>
int main(){
    int p,q;
    printf("Please input p,q: ");
    scanf("%d,%d",&p,&q);
    for(int i=0; i<=p; i++)
    {
        for(int j=0; j<=q; j++)
        {
            printf("(%2d,%2d)",i,j);
        }
        printf("\n");
    }
}