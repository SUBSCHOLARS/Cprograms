#include<stdio.h>
int main(){
    int n;
    printf("Please input n: ");
    scanf("%d",&n);
    printf("n=>%d\n",n);
    for(int i=0; i<n; i++)
    {
        if(i>=1)
        {
            for(int k=1; k<=i; k++)
            {
                printf("   ");
            }
        }
        for(int j=n-i; j>=1; j--)
        {
            printf("%3d",j);
        }
        printf("\n");
    }
}