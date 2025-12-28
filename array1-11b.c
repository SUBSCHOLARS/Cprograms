#include<stdio.h>
int main(){
        int x[]={2,87,86,35,58,20,39,54,77,94};
        int y[]={60,37,87,56,61,59,61,86,12,23};
        int z[10];
        int i;
        for(i=0;i<10;i++){
            z[i]=x[i]+y[i];
            printf("x[%d]=%3d y[%d]=%3d z[%d]=%3d\n",i,x[i],i,y[i],i,z[i]);
        }

}