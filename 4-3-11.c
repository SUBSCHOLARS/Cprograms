#include<stdio.h>
int main(){
    int Num,a=0,b=0,c=0;
    printf("Please input the number of students: ");
    scanf("%d",&Num);
    int StuNum[Num],Eng1[Num],Eng2[Num];
    int A[Num],B[Num],C[Num];
    for(int i=0; i<Num; i++)
    {
        printf("Please input the student number, English1 Score, and English2 Score: ");
        scanf("%d,%d,%d",&StuNum[i],&Eng1[i],&Eng2[i]);
        if(Eng1[i]>=80&&Eng2[i]>=80)
        {
            A[a]=StuNum[i];
            a++;
        }
        else if(Eng1[i]>=60&&Eng2[i]>=60)
        {
            B[b]=StuNum[i];
            b++;
        }
        else
        {
            C[c]=StuNum[i];
            c++;
        }
    }
    printf("A Class\n");
    for(int i=0; i<a; i++)
    {
        printf("%3d\n",A[i]);
    }
    printf("B Class\n");
    for(int i=0; i<b; i++)
    {
        printf("%3d\n",B[i]);
    }
    printf("C Class\n");
    for(int i=0; i<c; i++)
    {
        printf("%3d\n",C[i]);
    }
}