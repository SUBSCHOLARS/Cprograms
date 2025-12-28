#include<stdio.h>
double velo(double v0, double a, double t){
    double v;
    v=v0+a*t;
    return v;
}
double pos(double v0, double a, double t){
    double s;
    s=v0*t+0.5*a*t*t;
    return s;
}
int main(){
    double v0,a,t;
    printf("v0,a,t=?");
    scanf("%lf,%lf,%lf",&v0,&a,&t);
    printf("速度は%lfで位置は%lfです",velo(v0,a,t),pos(v0,a,t));
}