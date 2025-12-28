#include<stdio.h>
#include<math.h>
int main(){
    double degree,radian,PI=3.14,x1,x2,area;
    printf("三角形の2辺の長さをx1,x2とその挟む角度を入力してください:");
    scanf("%lf,%lf,%lf",&x1,&x2,&degree);
    radian=PI*degree/180.0;
    area=0.5*x1*x2*sin(radian);
    printf("与えられた三角形の面積は%5.2lfです\n",area);
}