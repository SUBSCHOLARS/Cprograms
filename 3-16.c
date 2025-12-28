#include<stdio.h>
int main(){
    int p;
    printf("2 ");
    for(int n=1; n<=100; n++)
    {
        for(int m=2; m<=n-1; m++)
        {
            p=0;
            if(n%m==0)
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            printf("%d ",n);
        }
    }
}