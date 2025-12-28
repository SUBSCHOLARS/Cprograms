#include<stdio.h>
int main(){
    int n,math,gradeNum,gradeCountA,gradeCountB,gradeCountC,gradeCountD,gradeCountF;
    gradeCountA=0;
    gradeCountB=0;
    gradeCountC=0;
    gradeCountD=0;
    gradeCountF=0;
    printf("Please input the number of students: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
    printf("No.%d Student's Math Score: ",i);
        scanf("%d",&math);
        if(math>=90)
        {
            gradeNum=1;
            gradeCountA++;
        }
        else if(math>=80)
        {
            gradeNum=2;
            gradeCountB++;
        }
        else if(math>=70)
        {
            gradeNum=3;
            gradeCountC++;
        }
        else if(math>=60)
        {
            gradeNum=4;
            gradeCountD++;
        }
        else
        {
            gradeNum=5;
            gradeCountF++;
        }
        if(gradeNum==1)
        {
            printf("No.%d Stundent's Math Score: %d/100 Grade: A\n",i,math);
        }
        else if(gradeNum==2)
        {
            printf("No.%d Stundent's Math Score: %d/100 Grade: B\n",i,math);
        }
        else if(gradeNum==3)
        {
            printf("No.%d Stundent's Math Score: %d/100 Grade: C\n",i,math);
        }
        else if(gradeNum==4)
        {
            printf("No.%d Stundent's Math Score: %d/100 Grade: D\n",i,math);
        }
        else if(gradeNum==5)
        {
            printf("No.%d Stundent's Math Score: %d/100 Grade: F\n",i,math);
        }
    }
    printf("A:%d B:%d C:%d D:%d F:%d",gradeCountA,gradeCountB,gradeCountC,gradeCountD,gradeCountF);
}