#include<stdio.h>
int main(){
    int n;
    printf("Please input n: ");
    scanf("%d",&n);
    printf("n=>%d\n",n);
    for(int i=n*n; i>=1; i--)
    {
        printf("%3d",i);
        if(i%n==1)
        {
            printf("\n");
        }
    }
}