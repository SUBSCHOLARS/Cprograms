#include<stdio.h>
int main(){
    int m,n;
    printf("Please input m=");
    scanf("%d",&m);
    if(m<0)
    {
        printf("An error occured");
        return 0;
    }
    printf("{1, ");
    for(int i=m-1; i>1; i--)
    {
        if(m%i==0)
        {
            n=m/i;
            printf("%d, ",m/i);
        }
    }
    printf("%d}\n",m);
    printf("The greatest divider except for %d itself is n=%d",m,n);
}