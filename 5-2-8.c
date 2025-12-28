#include<stdio.h>
int power (int x, int y){
    double s=1;
    for(int i=1; i<=y; i++){
        s*=x;
    }
    return s;
}
int main(){
    int x,y;
    printf("x,y=?");
    scanf("%d,%d",&x,&y);
    printf("%dの%d乗は%dです",x,y,power(x,y));
}