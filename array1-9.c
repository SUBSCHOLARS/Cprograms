#include<stdio.h>
int main(){
    int x[]={2,87,86,35,58,20,39,54,77,94}; //x[0]～x[9]の10個の要素
        int i;
        printf("　　最初の値：");
        for(i=0;i<10;i++){
            printf("%3d ",x[i]);
        }
        printf("\n");

        for (i=0;i<10;i++){
            x[i]=x[i]+1;
        }

        printf("足した後の値：");
        for(i=0;i<10;i++){
            printf("%3d ",x[i]);
        }
        printf("\n");

}