#include<stdio.h>
#include<math.h>
int main(){
    double PI=3.14,radian;
    for(int i=0; i<=360; i+=15)
    {
        radian=PI*i/180.0;
        printf("sin(%d)= %5.2lf, cos(%d)= %5.2lf\n",i,sin(radian),i,cos(radian));
    }
}