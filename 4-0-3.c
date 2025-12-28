#include <stdio.h> 
int main()
{ 
	int i, j, product;
	int row[10],column[10];
	int matrix[10][10];
	int max_eachRow[10]; /* 追加  */

	for (i = 0; i <= 9; i++){
		row[i]=i;
	}
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

	/* 以下，追加  */
	printf("\n");
	for (i = 0; i <= 9; i++){
		max_eachRow[i] = matrix[i][0];
		for (j = 1; j <= 9; j++){
			if (matrix[i][j]>max_eachRow[i]){
				max_eachRow[i] = matrix[i][j];
			}
		}
	}
	printf("     ");
	for (j = 0; j <= 9; j++){
		printf("'%2d '", column[j]);
	}
	printf("max_each row");
	printf("\n");

	for (i = 0; i <= 9; i++){
		printf("'%2d '", row[i]);
		for (j = 0; j <= 9; j++){
			printf("%3d  ", matrix[i][j]);
		}
		printf("        %3d  ", max_eachRow[i]);
		printf("\n");
    } 
}