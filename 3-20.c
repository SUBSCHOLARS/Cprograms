#include<stdio.h>
int main(){
    int eng1,eng2,n;
    printf("Please input the number of students: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("No.%d Student's EnglishⅠ And EnglishⅡ Score: ",i);
        scanf("%d,%d",&eng1,&eng2);
        if(eng1>=80&&eng2>=80)
        {
            printf("The student class is A\n");
        }
        else if(eng1>=60&&eng2>=60)
        {
            printf("The student class is B\n");
        }
        else
        {
            printf("The student class is C\n");
        }
    }
}