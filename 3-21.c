#include<stdio.h>
int main(){
    int n,num,even,odd;
    even=0;
    odd=0;
    printf("Please input the number of integers: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("[%d]=",i);
        scanf("%d",&num);
        if(num%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("There are %d even numbers\n",even);
    printf("There are %d odd numbers\n",odd);
}