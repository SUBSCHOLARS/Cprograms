#include<stdio.h>
int main(){
    int Mins[14],Number[14],sum;
    float Percent[14];
    char per='%';
    sum=0;
    for(int i=0; i<14; i++)
    {
        scanf("%d,%d",&Mins[i],&Number[i]);
        sum+=Number[i];
    }
    printf("No. People   Percent\n");
    for(int j=0; j<14; j++)
    {
        Percent[j]=100*(float)Number[j]/sum;
        printf("%d, %d,  %f%c\n",Mins[j],Number[j],Percent[j],per);
    }
    printf("The ministry which has more than 30 people\n");
    for(int k=0; k<14; k++)
    {
        if(Number[k]>=30)
        {
            printf("%d has %d people\n",Mins[k],Number[k]);
        }
    }
}