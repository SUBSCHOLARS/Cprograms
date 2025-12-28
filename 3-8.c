#include<stdio.h>
int main(){
    int n,gunmaf;
    gunmaf=1;
    printf("Please input n=");
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    {
        gunmaf*=i;
    }
    printf("%d!=%d",n,gunmaf);
}