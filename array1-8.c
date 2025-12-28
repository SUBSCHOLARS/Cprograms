#include<stdio.h>
int main(){
     int x[]={2,87,86,35,58,20,39,54,77,94};
        int i,sum;
        sum=0;
        for (i=0;i<10;i++){
            sum=sum+x[i];
        }
        printf("sum=%d\n",sum);
}