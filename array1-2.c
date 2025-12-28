#include<stdio.h>
int main(){
    int x[]={2,87,86,35,58,20,39,54,77,94};
        printf("%d\n",x[0]);
        printf("%d\n",x[3]);
        printf("%d %d %d\n",x[4],x[5],x[6]);
        printf("%d\n",x[9]);
        printf("%d %d %d %d %d\n",x[1],x[3],x[5],x[7],x[9]);

        printf("縦に並べて表示\n");
        printf("%d\n",x[1]);
        printf("%d\n",x[3]);
        printf("%d\n",x[5]);
        printf("%d\n",x[7]);
        printf("%d\n",x[9]);

        printf("縦に並べて表示2\n");
        printf("%d\n%d\n%d\n%d\n%d\n",x[1],x[3],x[5],x[7],x[9]);
}