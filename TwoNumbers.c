#include<stdio.h>
int main(){
    int x,y;
    printf("Please input x,y: ");
    scanf("%d,%d",&x,&y);
    if(x>y)
    {
        printf("%d,%d",x,y);
    }
    else if(x<y)
    {
        printf("%d,%d",y,x);
    }
    else if(x==y)
    {
        if(x==0&&y==0)
        {
            return 0;
        }
        printf("%d,%d",x,y);
    }
}