#include<stdio.h>
int main(){
    int n,i;
    printf("Please input n=");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("i=%d, i^2=%d\n",i,i*i);
    }
}