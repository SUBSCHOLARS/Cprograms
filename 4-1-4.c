#include<stdio.h>
int main(){
    int n,sumE,sumJ,sumWH;
    float aveE,aveJ,aveWH;
    scanf("%d",&n);
    int Num[n],English[n],Japanese[n],WorldHistory[n];
    sumE=0;
    sumJ=0;
    sumWH=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d,%d,%d,%d",&Num[i],&English[i],&Japanese[i],&WorldHistory[i]);
        sumE+=English[i];
        sumJ+=Japanese[i];
        sumWH+=WorldHistory[i];
    }
    aveE=(float)sumE/n;
    aveJ=(float)sumJ/n;
    aveWH=(float)sumWH/n;
    for(int j=0; j<n; j++)
    {
        printf("Examinee's Number: %d English: %d Japanese: %d World History: %d\n",Num[j],English[j],Japanese[j],WorldHistory[j]);
    }
    printf("Sum English: %d Japanese: %d World History: %d\n",sumE,sumJ,sumWH);
    printf("Average English: %f Japanese: %f World History: %f\n",aveE,aveJ,aveWH);
    printf("3科目とも平均点を超えている学生の学生番号とそれぞれの点数\n");
    for(int j=0; j<n; j++)
    {
        if((float)English[j]>aveJ&&(float)Japanese[j]>aveJ&&(float)WorldHistory[j]>aveWH)
        {
            printf("Examinee's Number: %d English: %d Japanese: %d World History: %d\n",Num[j],English[j],Japanese[j],WorldHistory[j]);
        }
    }
}