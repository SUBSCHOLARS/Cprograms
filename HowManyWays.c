#include<stdio.h>
int main(){
    int n,x,a,b,c,whole;
    printf("Please input n,x: ");
    scanf("%d,%d",&n,&x);
    whole=n*(n-1);
    if(n==1&&x!=1)
    {
        printf("Unacceptable");
    }
    for(int i=1; i<=n; i++)
    {
        a=i;
        for(int j=2; j<=n; j++)
        {
            b=j;
            c=n-a-b;
            if(a>=n||b>=n||c>=n)
            {
                whole--;
            }
        }
    }
    printf("%d",whole/6);
}