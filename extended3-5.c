#include<stdio.h>
int main(){
    int n,i;
    float secpower;
    secpower=1.0f;
    printf("Please input n=");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        secpower*=2;
    }
    printf("2^%d=%.0f",n,secpower);
}