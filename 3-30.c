#include<stdio.h>
int main(){
    int n,left,center;
    char asterisk;
    asterisk='*';
    printf("Note: you can only input multipliers of 2 which are more than 4\n");
    printf("Please input n: ");
    scanf("%d",&n);
    left=0;
    center=n-2;
    printf("n=>%d\n",n);
    for(int i=1; i<=n-1; i++)
    {
        if(i<=(n/2))
        {
            for(int k=1; k<=left; k++)
            {
                printf(" ");
            }
            printf("%c",asterisk);
            for(int j=center; j>0; j--)
            {
                printf(" ");
            }
            printf("%c",asterisk);
            left++;
            center-=2;
            printf("\n");
        }
        else if(i>(n/2))
        {
            for(int k=left; k>2; k--)
            {
                printf(" ");
            }
            printf("%c",asterisk);
            for(int j=0; j<center+4; j++)
            {
                printf(" ");
            }
            printf("%c",asterisk);
            left--;
            center+=2;
            printf("\n");
        }
    }
}