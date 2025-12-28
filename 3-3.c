#include<stdio.h>
int main(){
    int n,sum,num,i;
    float average;
    sum=0;
    printf("Please input n=");
    scanf("%d",&n);
    printf("Please input %d numbers\n",n);
    for(int i=1; i<=n; i++)
    {
        printf("[%d]=",i);
        scanf("%d",&num);
        sum+=num;
    }
    average=(float)sum/(float)n;
    printf("%f",average);
}