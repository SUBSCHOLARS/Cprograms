#include<stdio.h>
int main(){
    int i,x[10],sum,length;
    double ave;
    sum=0;
    ave=0;
    for (i=0;i<10;i++){
        printf("x[%d]の値を入れてください．",i);
        scanf("%d",&x[i]);
    }
    printf("入力された値は以下の通りです．\n");
    for (i=0;i<10;i++){
        sum+=x[i];
        printf("%d\n",x[i]);
    }
    length=sizeof(x)/sizeof(x[0]);
    ave=(double)sum/length;
    printf("合計:%d\n",sum);
    printf("平均:%lf",ave);
}