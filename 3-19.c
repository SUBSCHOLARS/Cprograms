#include<stdio.h>
int main(){
    int n,isOver50,Count;
    Count=0;
    printf("Please input the number of integers: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("[%d]=",i);
        scanf("%d",&isOver50);
        if(isOver50>=50)
        {
            Count++;
        }
    }
    printf("The number over 50: %d\n",Count);
    printf("The number below 50: %d",n-Count);
}