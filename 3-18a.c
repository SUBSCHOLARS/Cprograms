#include<stdio.h>
int main(){
    int n,math,gradeNum;
    printf("Please input the number of students: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("No.%d Student's Math Score: ",i);
        scanf("%d",&math);
        if(math>=90)
        {
            gradeNum=1;
        }
        else if(math>=80)
        {
            gradeNum=2;
        }
        else if(math>=70)
        {
            gradeNum=3;
        }
        else if(math>=60)
        {
            gradeNum=4;
        }
        else
        {
            gradeNum=5;
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
}