#include<stdio.h>
int main(){
    int n,gunmaf,gunmafan;
    double inverse,inversedsum,inversean,inversedsuman,wholesum;
    printf("Please input n=");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        gunmaf*=i;
        if(i%2==1)
        {
            inverse=1.0/(double)gunmaf;
            inversedsum+=inverse;
        }
        if(i%2==0)
        {
            inverse=1.0/(double)gunmaf;
            inversedsum-=inverse;
        }
    }
    wholesum=1+inversedsum+inversedsuman;
    printf("the sum id %lf",wholesum);
}