#include<stdio.h>
int main(){
    int n,min,x;
    min = __INT_MAX__;
    printf("Please input the number of integers: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("An error occured");
        return 0;
    }
    printf("[1]=");
    scanf("%d",&min);
    for(int i=2; i<=n; i++)
    {
        printf("[%d]=",i);
        scanf("%d",&x);
        if(x<=min)
        {
            min=x;
        }
    }
    printf("The minimum value is %d",min);
}