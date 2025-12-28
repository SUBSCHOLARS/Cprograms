#include<stdio.h>
int main(){
    int n,i,sum;
    sum=0;
    printf("Please input n=");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        sum += i*i;
    }
    printf("sum=%d",sum);
}