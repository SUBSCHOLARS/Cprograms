#include<stdio.h>
int main(){
    int n;
    printf("Please input n: ");
    scanf("%d",&n);
    printf("n=>%d\n",n);
    for(int i=0; i<n*n; i++)
    {
        printf("%3d",i+1);
        if((i+1)%n==0)
        {
            printf("\n");
        }
    }
}