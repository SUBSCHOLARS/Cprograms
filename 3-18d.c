#include<stdio.h>
int main(){
    int n,math,eng,gradeNum,gradeENum,gradeCountA,gradeCountB,gradeCountC,gradeCountD,gradeCountF,gradeAEng,gradeBEng,gradeCEng,gradeDEng,gradeFEng;
    float permath,pereng;
    char percent;
    percent='%';
    gradeCountA=0;
    gradeCountB=0;
    gradeCountC=0;
    gradeCountD=0;
    gradeCountF=0;
    gradeAEng=0;
    gradeBEng=0;
    gradeCEng=0;
    gradeDEng=0;
    gradeFEng=0;
    printf("Please input the number of students: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
    printf("Please input No.%d Student's score of Math and English score: ",i);
        scanf("%d,%d",&math,&eng);
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
        else if(math<=59)
        {
            gradeNum=5;
            gradeCountF++;
        }
        if(eng>=90)
        {
            gradeENum=6;
            gradeAEng++;
        }
        else if(eng>=80)
        {
            gradeENum=7;
            gradeBEng++;
        }
        else if(eng>=70)
        {
            gradeENum=8;
            gradeCEng++;
        }
        else if(eng>=60)
        {
            gradeENum=9;
            gradeDEng++;
        }
        else if(eng<=59)
        {
            gradeENum=10;
            gradeFEng++;
        }
        if(gradeNum==1)
        {
            printf("No.%d Stundent's Math Score: %d Grade: A\n",i,math);
        }
        else if(gradeNum==2)
        {
            printf("No.%d Stundent's Math Score: %d Grade: B\n",i,math);
        }
        else if(gradeNum==3)
        {
            printf("No.%d Stundent's Math Score: %d Grade: C\n",i,math);
        }
        else if(gradeNum==4)
        {
            printf("No.%d Stundent's Math Score: %d Grade: D\n",i,math);
        }
        else if(gradeNum==5)
        {
            printf("No.%d Stundent's Math Score: %d Grade: F\n",i,math);
        }
        if(gradeENum==6)
        {
            printf("No.%d Stundent's English Score: %d Grade: A\n",i,eng);
        }
        else if(gradeENum==7)
        {
            printf("No.%d Stundent's English Score: %d Grade: B\n",i,eng);
        }
        else if(gradeENum==8)
        {
            printf("No.%d Stundent's English Score: %d Grade: C\n",i,eng);
        }
        else if(gradeENum==9)
        {
            printf("No.%d Stundent's English Score: %d Grade: D\n",i,eng);
        }
        else if(gradeENum==10)
        {
            printf("No.%d Stundent's English Score: %d Grade: F\n",i,eng);
        }
    }
    printf("GradeA: English: %d Math: %d\n",gradeAEng,gradeCountA);
    printf("GradeB: English: %d Math: %d\n",gradeBEng,gradeCountB);
    printf("GradeC: English: %d Math: %d\n",gradeCEng,gradeCountC);
    printf("GradeD: English: %d Math: %d\n",gradeDEng,gradeCountD);
    printf("GradeF: English: %d Math: %d\n",gradeFEng,gradeCountF);
    printf("Math\n");
    printf("A:%.1f%c B:%.1f%c C:%.1f%c D:%.1f%c F:%.1f%c\n",((float)gradeCountA/n)*100,percent,((float)gradeCountB/n)*100,percent,((float)gradeCountC/n)*100,percent,((float)gradeCountD/n)*100,percent,((float)gradeCountF/n)*100,percent);
    printf("English\n");
    printf("A:%.1f%c B:%.1f%c C:%.1f%c D:%.1f%c F:%.1f%c\n",((float)gradeAEng/n)*100,percent,((float)gradeBEng/n)*100,percent,((float)gradeCEng/n)*100,percent,((float)gradeDEng/n)*100,percent,((float)gradeFEng/n)*100,percent);
}