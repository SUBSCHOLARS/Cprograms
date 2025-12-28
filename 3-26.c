#include<stdio.h>
int main(){
    int n;
    printf("Please input n: ");
    scanf("%d",&n);
    printf("n=>%d\n",n);
    for(int i=n-1; i>=0; i--)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf("%3d",j);
        }
        printf("\n");
    }
}