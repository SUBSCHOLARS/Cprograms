#include<stdio.h>
#include<math.h>
int main(){
    double degree,radian,PI,x,y;
    PI=3.14;
    degree=60;
    radian=PI*degree/180.0;
    x=cos(radian);
    y=sin(radian);
    printf("cos(%5.2lf)=%5.2lf\n",degree,x);
    printf("sin(%5.2lf)=%5.2lf\n",degree,y);
}