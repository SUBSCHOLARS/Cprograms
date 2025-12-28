#include<stdio.h>
int main(){
    int n;
    printf("Please input n: ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            printf("(%2d,%2d)",i,j);
        }
        printf("\n");
    }
}