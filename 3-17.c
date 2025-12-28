#include<stdio.h>
int main(){
    int n,num,isOver50;
    isOver50=0;
    printf("Please input the number of integers: ");
    scanf("%d",&n);
    printf("Note: you can enter the integer between 1 and 100\n");
    for(int i=1; i<=n; i++)
    {
        printf("[%d]=",i);
        scanf("%d",&num);
        if(num>=50&&num<=100)
        {
            isOver50++;
        }
    }
    printf("there is/are %d number(s) over 50",isOver50);
}