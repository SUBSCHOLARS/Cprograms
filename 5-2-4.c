#include<stdio.h>
#include<math.h>
double Ougi(double x, double y){
    double PI=3.14,area;
    area=x*x*PI*y/360.0;
    return area;
}
int main(){
    double r,degree;
    printf("扇形の半径と中心角の値を入力してください: ");
    scanf("%lf,%lf",&r,&degree);
    printf("扇形の面積は%lfです",Ougi(r,degree));
}