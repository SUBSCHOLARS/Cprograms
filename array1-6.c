#include<stdio.h>
int main(){
    int x[]={2,87,86,35,58,20,39,54,77,94};
        int sum1,sum2;

        sum1=x[0]+x[1];
        printf("sum1=%d\n",sum1);


        sum2=x[5]+x[6]+x[7];
        printf("sum2=%d\n",sum2);


        printf("%d+%d=%d\n",x[0],x[1],sum1);
        printf("%d+%d+%d=%d\n",x[5],x[6],x[7],sum2);
}