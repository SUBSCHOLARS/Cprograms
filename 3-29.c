#include<stdio.h>
int main(){
    int n;
    char asterisk;
    asterisk='*';
    printf("Please input n: ");
    scanf("%d",&n);
    printf("n=>%d\n",n);
    for(int i=1; i<=n; i++)
    {
        printf("%c",asterisk);
    }
    printf("\n");
    for(int j=1; j<=n-2; j++)
    {
        for(int k=1; k<2; k++)
        {
            printf("%c",asterisk);
        }
        for(int l=1; l<=n-2; l++)
        {
            printf(" ");
        }
        for(int m=1; m<2; m++)
        {
            printf("%c",asterisk);
        }
        printf("\n");
    }
    for(int o=1; o<=n; o++)
    {
        printf("%c",asterisk);
    }
}