#include<stdio.h>
int main(){
    int n,gunmaf,gunmafneo,sum;
    gunmaf=1;
    sum=0;
    printf("Please input n=");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        gunmaf*=i;
    }
    sum+=gunmaf;
    for(int k=n; k>1; k--)
    {
        gunmaf/=k;
        sum+=gunmaf;
    }
    for(int j=1; j<n; j++)
    {
        printf("%d!+",j);
    }
    printf("%d!=%d",n,sum);
}