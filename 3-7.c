#include<stdio.h>
int main(){
    double y;
    for(int t=0; t<=100; t+=5)
    {
        y=9.8*(t*t)/2.0;
        printf("The position is %lf when time is %d\n",y,t);
    }
}