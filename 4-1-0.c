#include<stdio.h>
int main(){
    int n,sum;
    float ave;
    printf("Please input the number of students: ");
    scanf("%d",&n);
    printf("%d\n",n);
    sum=0;
    ave=0;
    int score[n];
    for(int i=0; i<n; i++)
    {
        printf("No.%d's Student's score: ",i);
        scanf("%d",&score[i]);
        printf("%d\n",score[i]);
        sum+=score[i];
    }
    ave=(float)sum/n;
    printf("average: %lf\n",ave);
    for(int j=0; j<n; j++)
    {
        if((float)score[j]>=ave)
        {
            printf("No.%d Score: %d\n",j,score[j]);
        }
    }
}