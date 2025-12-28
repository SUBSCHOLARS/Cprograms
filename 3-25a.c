#include<stdio.h>
int main(){
    int n;
    printf("Please input n: ");
    scanf("%d",&n);
    printf("n=>%d\n",n);
    for(int i=1; i<=n*n; i++)
    {
        printf("%3d",i);
        if(i%n==0)
        {
            printf("\n");
        }
    }
}