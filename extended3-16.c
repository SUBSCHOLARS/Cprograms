#include<stdio.h>
#include<stdbool.h>
int main(){
    bool isPrime;
    printf("2 ");
    for(int n=3; n<=100; n++)
    {
        for(int m=2; m<=n-1; m++)
        {
            isPrime=true;
            if(n%m==0)
            {
                isPrime=false;
                break;
            }
        }
        if(isPrime==true)
        {
            printf("%d ",n);
        }
    }
}