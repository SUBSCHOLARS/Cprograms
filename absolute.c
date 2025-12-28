#include<stdio.h>
int main(){
    int v[15]={1,-1,8,5,-14,2,0,-7,50,11,-19,2,3,56,-4};
    int u[15];
    for(int i=0; i<15; i++)
    {
        if(v[i]<0)
        {
            u[i]=-v[i];
        }
        else
        {
            u[i]=v[i];
        }
        printf("%d\n",u[i]);
    }
}