#include<stdio.h> 
int main()
{
	int i, kosuu;
	int a[100][2];
	int max,maxnohito,min,minnohito;   

	printf("Please input the number of data=");
	scanf("%d", &kosuu);
	printf("\n%d\n", kosuu);
	for (i = 0; i<kosuu; i++)
	{
		printf("Please input data=");
		scanf("%d,%d", &a[i][0], &a[i][1]);
		printf("%d,%d\n", a[i][0],a[i][1]);
	}

	max = a[0][1];
    min=a[0][1];
	maxnohito=a[0][0];

	for (i = 1; i<kosuu; i++)
	{
		if (a[i][1]>max)
		{
			max = a[i][1];
			maxnohito=a[i][0];
		}
        if(a[i][1]<min)
        {
            min=a[i][1];
            minnohito=a[i][0];
        }
	}

	printf("Student number %d no hito ga Maximum %d \n",maxnohito,max);
    printf("Student number %d no hito ga Minimun %d \n",minnohito,min);
}