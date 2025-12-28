#include <stdio.h> 
int main()
{ 
	int i, j;
	int row[10],column[10];
	int matrix[10][10],sum[10],sumcol[10],length,sum_for_all;
    float avg_eachRow[10],avg_eachColumn[10],avg_for_all;
    sum_for_all=0;
	for (i = 0; i <= 9; i++){
		row[i]=i; 
        sum[i]=0;
	}
	for (j = 0; j <= 9; j++){
		column[j] = j;
        sumcol[j]=0;
	}
    length=sizeof(row)/sizeof(row[0]);
	printf("     ");
	for  (j  =  0;  j  <=9;  j++){
		printf("'%2d '", column[j]);
	}
	printf("\n"); 

	for  (i  =  0;  i  <= 9;  i++){
		printf("'%2d '", row[i]);
		for  (j  =  0;  j  <=9;  j++){
			matrix[i][j] = row[i]*column[j];
            sum[i]+=matrix[i][j];
			printf("%3d  ", matrix[i][j]);
		}
		printf("\n"); 
	}
    for(i=0; i<=9; i++)
    {
        for(j=0; j<=9; j++)
        {
            sumcol[i]+=matrix[j][i];
        }
        sum_for_all+=sum[i];
        sum_for_all+=sumcol[i];
    }
    avg_for_all=(float)sum_for_all/(length*length);
    for(j=0; j<=9; j++)
    {
        avg_eachRow[j]=(float)sum[j]/length;
        avg_eachColumn[j]=(float)sumcol[j]/length;
    }
    
    printf("     ");
    for  (j  =  0;  j  <=9;  j++){
		printf("'%2d '", column[j]);
	}
    printf("avg_each row");
	printf("\n"); 

	for  (i  =  0;  i  <= 9;  i++){
		printf("'%2d '", row[i]);
		for  (j  =  0;  j  <=9;  j++){
			printf("%3d  ", matrix[i][j]);
		}
        printf("    %.2f",avg_eachRow[i]);
		printf("\n"); 
	}
    printf(" avg ");
    for(i=0; i<=9; i++)
    {
        printf("%.2f ",avg_eachColumn[i]);
    }
    printf("\n");
    printf("_each column\n");
    printf("avg_for_all: %.2f",avg_for_all);
} 