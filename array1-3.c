#include<stdio.h>
int main(){
    int x[]={2,87,86,35,58,20,39,54,77,94};
        int i;

        printf("表示その1 要素のみ縦に並べて表示\n");
        for (i=0;i<10;i++){
            printf("%d\n",x[i]);
        }

        printf("\n表示その２ 要素番号と並べて表示\n");

        for (i=0;i<10;i++){
            printf("%d : %d\n",i,x[i]);
        }

        printf("\n表示その3 x[番号]=要素の値　の形式で表示\n");
        for (i=0;i<10;i++){
            printf("x[%d] = %d\n",i,x[i]);
        }

        printf("\n表示その4 要素の値のみ横に並べて表示\n");
        for (i=0;i<10;i++){
            printf("%d ",x[i]);
        }

        x[3]=100;
        x[5]=200;
        printf("\n\n表示その5 x[3]とx[5]の値を変更後，要素の値のみ横に並べて表示\n");
        for (i=0;i<10;i++){
            printf("%d ",x[i]);
        }
}