#include<stdio.h>
int main(){
    int n;
    printf("Input n=?");
    scanf("%d",&n);
    for(int i=n; i>=0; i--)
    {
        if(i != 0)
        {
            printf("%d\n",i);
        }
        else{
            printf("ZERO!!!");
        }
    }
}