#include<stdio.h>
int main(){
    int sum=0;
    int n,i;
    printf("Input n=?");
    scanf("%d",&n);
    if(n>=0)
    {
        for(i=0; i<=n; i++)
        {
            sum=sum+i;
        }
        printf("sum=%d",sum);
    }
    else
    {
        printf("Input n larger than 0!");
    }
}