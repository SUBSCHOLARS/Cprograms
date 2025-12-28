#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    float weight[13],height[19],subt[19][13];
    char result[19][13][15];
    for(i=0; i<19; i++)
    {
        height[i]=150+2.5*i;
    }
    for(i=0; i<13; i++)
    {
        weight[i]=40+5*i;
    }
    for(i=0; i<19; i++)
    {
        for(j=0; j<13; j++)
        {
            subt[i][j]=height[i]-weight[j];
        }
    }
    for(i=0; i<19; i++)
    {
        for(j=0; j<13; j++)
        {
            if(subt[i][j]<100)
            {
                strcpy(result[i][j], "過　");
            }
            else if(subt[i][j]>=110)
            {
                strcpy(result[i][j], "寡　");
            }
            else
            {
                strcpy(result[i][j], "標準");
            }
        }
    }
    printf("体重・身長とその差\n");
	printf("       ");
	for (j=0;j<13;j++)
    {
		printf("  %5.2f ",weight[j]);
	}
	printf("\n");
	printf("       ");
	for (j=0;j<13;j++)
    {
		printf("--------");
	}
	printf("\n");

	for (i=0;i<19;i++)
    {
		printf("%.2f|",height[i]);
		for (j=0;j<13;j++)
        {
			printf(" %6.2f ",subt[i][j]);
		}
		printf("\n");
	}
	printf("\n差に対応する文字列\n");
    printf("       ");
    for (j=0;j<13;j++)
    {
		printf(" %5.2f ",weight[j]);
	}
	printf("\n");
	printf("       ");
	for (j=0;j<13;j++)
    {
		printf("-------");
	}
	printf("\n");

	for (i=0;i<19;i++)
    {
		printf("%.2f|",height[i]);
		for (j=0;j<13;j++)
        {
			printf("  %s ",result[i][j]);
		}
		printf("\n");
	}
}