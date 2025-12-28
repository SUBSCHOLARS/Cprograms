#include<stdio.h>
int main(){
    int Num[10],Pop[10],Subt[10],maxNum,max;
    for(int i=0; i<10; i++)
    {
        scanf("%d,%d",&Num[i],&Pop[i]);
    }
    max=Pop[0];
    for(int i=1; i<10; i++)
    {
        if(max<Pop[i])
        {
            max=Pop[i];
            maxNum=Num[i];
        }
    }
    printf("No.　　　　Population　　　　Subtraction\n");
    for(int i=0; i<10; i++)
    {
        Subt[i]=max-Pop[i];
        printf("%3d　　　　　　　%d　　　　　　　%d\n",Num[i],Pop[i],Subt[i]);
    }
}