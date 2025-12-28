#include<stdio.h>
#include<math.h>
double Absolute(double x){
    if(x<0){
        x*=-1;
        return x;
    }
    else{
        return x;
    }
}
int main(){
    double x;
    printf("値を入力してください");
    scanf("%lf",&x);
    printf("入力された値の絶対値は%lfです",Absolute(x));
}