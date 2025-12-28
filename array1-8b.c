#include<stdio.h>
int main(){
     int x[]={2,87,86,35,58,20,39,54,77,94};
        int i,sum,length;
        double ave;
        ave=0;
        sum=0;
        for (i=0;i<10;i++){
            sum=sum+x[i];
        }
        length=sizeof(x)/sizeof(x[0]);
        ave=(double)sum/length;
        printf("sum=%d\n",sum);
        printf("average=%lf",ave);
}