#include<stdio.h>
int main(){
    int Data[10][3],maxNum,max;
    for(int i=0; i<10; i++)
    {
        scanf("%d,%d",&Data[i][0],&Data[i][1]);
    }
    max=Data[0][1];
    for(int i=1; i<10; i++)
    {
        if(max<Data[i][1])
        {
            max=Data[i][1];
            maxNum=Data[i][0];
        }
    }
    printf("No.　　　　Population　　　　Subtraction\n");
    for(int i=0; i<10; i++)
    {
        Data[i][2]=max-Data[i][1];
        printf("%3d　　　　　　　%d　　　　　　　%d\n",Data[i][0],Data[i][1],Data[i][2]);
    }
}