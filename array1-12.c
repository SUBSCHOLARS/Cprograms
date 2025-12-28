#include<stdio.h>
int main(){
    int i,x[10];
    for (i=0;i<10;i++){
        printf("x[%d]の値を入れてください．",i);
        scanf("%d",&x[i]);
    }
    printf("入力された値は以下の通りです．\n");
    for (i=0;i<10;i++){
        printf("%d\n",x[i]);
    }
}