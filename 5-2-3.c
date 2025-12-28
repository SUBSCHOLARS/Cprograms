#include<stdio.h>
#include<math.h>
double distance(double x, double y, double v, double u){
    double d;
    d=sqrt((v-x)*(v-x)+(u-y)*(u-y));
    return d;
}
int main(){
    double x1,x2,y1,y2;
    printf("x1,y1,x2,y2=?");
    scanf("%lf,%lf,%lf,%lf",&x1,&y1,&x2,&y2);
    printf("二点間の距離は%lfです",distance(x1,y1,x2,y2));
}