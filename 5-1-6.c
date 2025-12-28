#include<stdio.h>
#include<math.h>
int main(){
    double x1,x2,y1,y2,distance;
    printf("2点(x1,y1)と(x2,y2)の値をそれぞれ入力してください: x1,y1,x2,y2=");
    scanf("%lf,%lf,%lf,%lf",&x1,&y1,&x2,&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("二点間の距離は%5.2lfです\n",distance);
}