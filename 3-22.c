#include<stdio.h>
int main(){
    float X,Y,veruni,horiuni;
    int n,m;
    printf("Note: the value is approximate\n");
    printf("Please input the height of paper: ");
    scanf("%f",&X);
    printf("Please input the width of paper: ");
    scanf("%f",&Y);
    printf("How much do you want to cut the paper in vertical position?: ");
    scanf("%d",&n);
    printf("How much do you want to cut the paper in horizontal position?: ");
    scanf("%d",&m);
    veruni = X/(float)n;
    horiuni = Y/(float)m;
    printf("The place where you should cut in vertical position is\n");
    printf("0.00m ");
    for(int i=1; i<=n-1; i++)
    {
        printf("%.2fm ",veruni*i);
    }
    printf("%.2fm\n",X);
    printf("The place where you should cut in horizontal position is\n");
    printf("0.00m ");
    for(int j=1; j<=m-1; j++)
    {
        printf("%.2fm ",horiuni*j);
    }
    printf("%.2fm\n",Y);
}