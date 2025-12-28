#include<stdio.h>
double shikaku(double x, double y){
    double s;
    s=x*y;
    return s;
}
double sankaku(double l, double h){
    double s;
    s=l*h*0.5;
    return s;
}
int main(){
    double a,b;
    printf("a=?");
    scanf("%lf",&a);

    printf("b=?");
    scanf("%lf",&b);

    printf("四角形の面積は%lf\n",shikaku(a,b));
    printf("三角形の面積は%lf\n",sankaku(a,b));
}