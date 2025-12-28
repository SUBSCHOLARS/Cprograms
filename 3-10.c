#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,evensum,oddsum,wholesum,initeven,initodd;
    bool iseven;
    evensum=0;
    oddsum=0;
    initeven=2;
    initodd=1;
    iseven=true;
    printf("Please input n=");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            oddsum+=i;
        }
        else
        {
            evensum-=i;
        }
    }
    wholesum=evensum+oddsum;
    /*printf("1");
    if(iseven)
    {
        printf("-%d",initeven);
        initodd+=2;
        iseven=false;
    }
    if(!iseven)
    {
        printf("+%d",initodd);
        initeven+=2;
        iseven=true;
    }
    else if(initeven==n)
    {
     printf("-%d=%d",initeven,wholesum);
    }
    else if(initodd==n)
    {
     printf("+%d=%d",initodd,wholesum);
    }*/
   printf("The sum is %d",wholesum);
}