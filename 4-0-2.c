#include <stdio.h> 
int main()
{ 
	int i, j;
	int row[10],column[10];
	int matrix[10][10];

         /* row[0]=0, row[1]=1・・・と入れる．*/
	for (i = 0; i <= 9; i++){
		row[i]=i; 
	}

         /* column[0]=0, column[1]=1・・・と入れる．*/
	for (j = 0; j <= 9; j++){
		column[j] = j;
	}

	printf("     ");
	for  (j  =  0;  j  <=9;  j++){
		printf("'%2d '", column[j]);
	}
	printf("\n"); 

	for  (i  =  0;  i  <= 9;  i++){
		printf("'%2d '", row[i]);
		for  (j  =  0;  j  <=9;  j++){
			matrix[i][j] = row[i]*column[j];
			printf("%3d  ", matrix[i][j]);
		}
		printf("\n"); 
	}
} 