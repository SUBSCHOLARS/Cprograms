#include<stdio.h>
int main(){
    int n;
    printf("Input n=?");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("%d: Hello!\n",i);
    }
}