#include<stdio.h>
#include<math.h>
int Circle(double x, double y, double a, double b, double c){
    if((x-a)*(x-a)+(y-b)*(y-b)<=c*c){
        return 0;
    }
    else{
        return -1;
    }
}
int main(){
    double x,y,a,b,c;
    printf("P(x,y),a,b,c=?");
    scanf("%lf,%lf,%lf,%lf,%lf",&x,&y,&a,&b,&c);
    printf("Result=%d",Circle(x,y,a,b,c));
}