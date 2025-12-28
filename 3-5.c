#include<stdio.h>
int main(){
    int n,secpower,i;
    secpower=1;
    printf("Please input n=");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        secpower*=2;
    }
    printf("2^%d=%d",n,secpower);
}