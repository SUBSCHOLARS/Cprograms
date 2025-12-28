#include<stdio.h>
int main(){
    int n,org,blank,fin,blankcount,numcount;
    printf("Please input n: ");
    scanf("%d",&n);
    blankcount=1;
    numcount=0;
    org=n*n-1;
    blank=n*(n-1)*1/2;
    fin=org-blank;
    printf("n=>%d\n",n);
    for(int i=0; i<n; i++)
    {
        printf("%3d",i);
    }
    printf("\n");
    printf("   ");
    for(int j=n; j<=fin; j++)
    {
        if((blankcount+numcount)%n==0)
        {
            numcount=0;
            printf("\n");
            for(int k=1; k<=blankcount+1; k++)
            {
                printf("   ");
            }
            blankcount++;
        }
        numcount++;
        printf("%3d",j);
    }
}