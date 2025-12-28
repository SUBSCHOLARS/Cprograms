#include<stdio.h>
#include<math.h>
int main(){
    double theta,radian,PI,x,y,x1,y1;
    PI=3.14;
    printf("x,y,θ=?");
    scanf("%lf,%lf,%lf",&x,&y,&theta);
    radian=PI*theta/180.0;
    x1=x*cos(radian)-y*sin(radian);
    y1=x*sin(radian)+y*cos(radian);
    printf("x1=%5.2lf, y1=%5.2lf\n",x1,y1);
}