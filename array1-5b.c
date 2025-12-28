#include<stdio.h>
int main(){
    int x[]={2,87,86,35,58,20,39,54,77,94};
        int i,j;

        printf("50以上の値\n");
        for (i=0;i<10;i++){
            if (x[i]>=50) {
                printf("%d\n",x[i]);
            }
        }
        printf("50未満の値\n");
        for(j=0; j<10; j++){
            if(x[j]<50){
                printf("%d\n",x[j]);
            }
        }
}