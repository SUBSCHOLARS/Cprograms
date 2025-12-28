#include<stdio.h>
int main(){
    int a,b,n,value;
    printf("Please input a,b,n=");
    scanf("%d,%d,%d",&a,&b,&n);
    for(int i=1; i<=n; i++)
    {
        value=a+b*(i-1);
        printf("a_%d=%d\n",i,value);
    }
}