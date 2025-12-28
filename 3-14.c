#include<stdio.h>
int main(){
    int n,x,max,min;
    printf("Please input the number of integers: ");
    scanf("%d",&n);
    printf("[1]=");
    scanf("%d",&max);
    min=max;
    for(int i=2; i<=n; i++)
    {
        printf("[%d]=",i);
        scanf("%d",&x);
        if(x>=max)
        {
            max=x;
        }
        if(x<=min)
        {
            min=x;
        }
    }
    printf("The max value is %d\nThe minimum value is %d",max,min);
}