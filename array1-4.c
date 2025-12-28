#include<stdio.h>
int main(){
    int i;
    int x[]={2,87,86,35,58,20,39,54,77,94};
    printf("\n横に並べて表示その１\n");
    for (i=1;i<=5;i++) {
        printf("%d ",x[i*2-1]);
    }

    printf("\n縦に並べて表示その１\n");
    for (i=1;i<=5;i++) {
        printf("%d\n",x[i*2-1]);
    }


    printf("\n横に並べて表示その２\n");
    for (i=1;i<=9;i+=2) {
        printf("%d ",x[i]);
    }

    printf("\n縦に並べて表示その２\n");
    for (i=1;i<=9;i+=2) {
        printf("%d\n",x[i]);
}
}