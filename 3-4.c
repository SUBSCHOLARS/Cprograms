#include<stdio.h>
int main(){
    int eng,jap,his,stu,sum;
    int sumE,sumJ,sumH;
    double aveE,aveJ,aveH;
    sumE=0;
    sumJ=0;
    sumH=0;
    printf("Please input the number of students: ");
    scanf("%d",&stu);
    for(int i=1; i<=stu; i++)
    {
        printf("No.%d Student: English=",i);
        scanf("%d",&eng);
        printf("No.%d Student: Japanese=",i);
        scanf("%d",&jap);
        printf("No.%d Student: World History=",i);
        scanf("%d",&his);
        sum=eng+jap+his;
        sumE+=eng;
        sumJ+=jap;
        sumH+=his;
        printf("No.%d Student's sum score: %d\n",i,sum);
    }
    aveE=(double)sumE/(double)stu;
    aveJ=(double)sumJ/(double)stu;
    aveH=(double)sumH/(double)stu;
    printf("Sum of English: %d\n",sumE);
    printf("Sum of Japanese: %d\n",sumJ);
    printf("Sum of World History: %d\n",sumH);
    printf("Average of English: %lf\n",aveE);
    printf("Average of Japanese: %lf\n",aveJ);
    printf("Average of World History: %lf\n",aveH);
}