#include<stdio.h> 
int main()
{
	int i, kosuu;
	int a[100][2],b[100][2];
	int max,maxnohito,sum;
    float ave;  
    sum=0;
	printf("Please input the number of data=");
	scanf("%d", &kosuu);
	printf("\n%d\n", kosuu);
	for (i = 0; i<kosuu; i++)
	{
		printf("Please input data=");
		scanf("%d,%d", &a[i][0], &a[i][1]);
		printf("%d,%d\n", a[i][0],a[i][1]);
        sum+=a[i][1];
	}

	max = a[0][1]; 
	maxnohito=a[0][0];
    ave=(float)sum/kosuu;

	for (i = 1; i<kosuu; i++)
	{
		if (a[i][1]>max)
		{
			max = a[i][1];
			maxnohito=a[i][0];
		}
	}
	printf("Student number %d no hito ga Maximum %d \n",maxnohito,max);
    printf("The average: %f\n",ave);
    printf("平均値と入力した各データとの差\n");
    for(int i=0; i<kosuu; i++)
    {
        b[i][1]=a[i][1]-ave;
        printf("%d,%d\n",a[i][0],b[i][1]);
    }
}