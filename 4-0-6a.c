#include<stdio.h>
#include<string.h>

int main(){
	int i,j;
	float x,bmi[25][25];
	float weight[25],height[25];
	char result[25][25][10];
	int n_of_height=21;
	int n_of_weight=11;
	for (i=0; i<n_of_height; i++)
    {
		height[i]= 140+2.5*i;
	}
	for (j=0; j<n_of_weight; j++)
    {
		weight[j]= 40+5*j;
	}
for(i=0; i<n_of_height; i++)
{
    for(j=0; j<n_of_weight; j++)
    {
        bmi[i][j]=(weight[j])/((height[i]/100)*(height[i]/100));
    }
}
	printf("身長・体重とBMI体格指数 \n");
	printf("       ");
	for (j=0;j<n_of_weight;j++)
    {
		printf(" %5.2f",weight[j]);
	}
	printf("\n");
	printf("       ");
	for (j=0;j<n_of_weight;j++)
    {
		printf("------");
	}
	printf("\n");

	for (i=n_of_height-1;i>=0;i--)
    {
		printf("%6.2f|",height[i]);
		for (j=0;j<n_of_weight;j++)
        {
			printf(" %5.2f",bmi[i][j]);
		}
		printf("\n");
	}
	printf("\n身長・体重と体格 \n");
    for(i=0; i<n_of_height; i++)
    {
        for(j=0; j<n_of_weight; j++)
        {
            if(bmi[i][j]<18.5)
            {
                strcpy(result[i][j],"低体重");
            }
            else if(bmi[i][j]<25)
            {
                strcpy(result[i][j],"ふつう");
            }
            else if(bmi[i][j]<30)
            {
                strcpy(result[i][j],"肥満１");
            }
            else if(bmi[i][j]<35)
            {
                strcpy(result[i][j],"肥満２");
            }
            else if(bmi[i][j]<40)
            {
                strcpy(result[i][j],"肥満３");
            }
            else
            {
                strcpy(result[i][j],"肥満４");
            }
        }
    }
	printf("      ");
	for (j=0;j<n_of_weight;j++)
    {
		printf(" %5.2f",weight[j]);
	}
	printf("\n");
	printf("       ");
	for (j=0;j<n_of_weight;j++)
    {
		printf("------");
	}
	printf("\n");

	for (i=n_of_height-1;i>=0;i--)
    {
		printf("%6.2f|",height[i]);
		for (j=0;j<n_of_weight;j++)
        {
			printf("%s",result[i][j]);
		}
		printf("\n");
	}
} 