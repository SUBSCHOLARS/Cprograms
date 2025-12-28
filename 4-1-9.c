#include<stdio.h>
int main(){
    int n;
    float ave[3];
    scanf("%d",&n);
    int Num[n],DataSet[n][3],sum[3];
    for(int i=0; i<3; i++)
    {
        sum[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d,%d,%d,%d",&Num[i],&DataSet[i][0],&DataSet[i][1],&DataSet[i][2]);
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            sum[i]+=DataSet[j][i];
        }
    }
    for(int i=0; i<3; i++)
    {
        ave[i]=(float)sum[i]/n;
    }
    for(int j=0; j<n; j++)
    {
        printf("Examinee's Number: %d English: %d Japanese: %d World History: %d\n",Num[j],DataSet[j][0],DataSet[j][1],DataSet[j][2]);
    }
    printf("Sum English: %d Japanese: %d World History: %d\n",sum[0],sum[1],sum[2]);
    printf("Average English: %f Japanese: %f World History: %f\n",ave[0],ave[1],ave[2]);
    printf("３科目とも平均点を上回っていた学生の番号と各点数");
    for(int i=0; i<n; i++)
    {
        if(DataSet[i][0]>ave[0]&&DataSet[i][1]>ave[1]&&DataSet[i][2]>ave[2])
        {
            printf("%d,%d,%d,%d\n",Num[i],DataSet[i][0],DataSet[i][1],DataSet[i][2]);
        }
    }
}