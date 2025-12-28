#include<stdio.h>
int main(){
    float Data[16][3],sumNiko=0,aveNiko,sumTaa=0,aveTaa;
    for(int i=0; i<16; i++)
    {
        scanf("%f,%f,%f",&Data[i][0],&Data[i][1],&Data[i][2]);
        sumNiko+=Data[i][1];
        sumTaa+=Data[i][2];
    }
    aveNiko=sumNiko/16;
    aveTaa=sumTaa/16;
    printf("ニコチンの平均含有量: %f\n",aveNiko);
    printf("タールの平均含有量: %f\n",aveTaa);
    printf("ニコチン含有量が平均より上のもの\n");
    printf("No.　ニコチン　ニコチンの平均との差\n");
    for(int i=0; i<16; i++)
    {
        if(Data[i][1]>aveNiko)
        {
            printf("%d　　　%.2f　　　%f\n",(int)Data[i][0],Data[i][1],Data[i][1]-aveNiko);
        }
    }
    printf("タール含有量が平均より上のもの\n");
    printf("No.　タール　ニコチンの平均との差\n");
    for(int i=0; i<16; i++)
    {
        if(Data[i][2]>aveTaa)
        {
            printf("%d　　　%.2f　　　%f\n",(int)Data[i][0],Data[i][2],Data[i][2]-aveTaa);
        }
    }
}