#include<stdio.h>
#include<math.h>
int main(){
    double Shahen,Taippen,Nokori;
    printf("直角三角形の斜辺と他の一辺の値を入力してください:");
    scanf("%lf,%lf",&Shahen,&Taippen);
    if(Shahen<Taippen||Shahen<0||Taippen<0)
    {
        printf("直角三角形の性質を満たしていません");
        return 0;
    }
    else{
    Nokori=sqrt(Shahen*Shahen-Taippen*Taippen);
    printf("残りの辺の長さは%5.2lfです",Nokori);
    }
}