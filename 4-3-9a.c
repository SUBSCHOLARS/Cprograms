#include<stdio.h>
int main(){
    int Num[16];
    float Niko[16],Taar[16],sumNiko=0,aveNiko,sumTaa=0,aveTaa;
    for(int i=0; i<16; i++)
    {
        scanf("%d,%f,%f",&Num[i],&Niko[i],&Taar[i]);
        sumNiko+=Niko[i];
        sumTaa+=Taar[i];
    }
    aveNiko=sumNiko/16;
    aveTaa=sumTaa/16;
    printf("ニコチンの平均含有量: %f\n",aveNiko);
    printf("タールの平均含有量: %f\n",aveTaa);
    printf("ニコチン含有量が平均より上のもの\n");
    printf("No.　ニコチン　ニコチンの平均との差\n");
    for(int i=0; i<16; i++)
    {
        if(Niko[i]>aveNiko)
        {
            printf("%d　　　%.2f　　　%f\n",Num[i],Niko[i],Niko[i]-aveNiko);
        }
    }
    printf("タール含有量が平均より上のもの\n");
    printf("No.　タール　ニコチンの平均との差\n");
    for(int i=0; i<16; i++)
    {
        if(Taar[i]>aveTaa)
        {
            printf("%d　　　%.2f　　　%f\n",Num[i],Taar[i],Taar[i]-aveTaa);
        }
    }
}