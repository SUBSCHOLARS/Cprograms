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
    for(int i=m-1; i>1; i--)
    {
        if(m%i==0)
        {
            n=i;
            break;
        }
    }
    printf("The greatest divider except for %d itself is n=%d",m,n);
}