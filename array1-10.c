#include<stdio.h>
int main(){
        int x[10];
        int i;
        for (i=0;i<10;i++){
            x[i]=i;
        }

        for(i=0;i<10;i++){
            printf("x[%d]=%3d\n",i,x[i]);
        }
}