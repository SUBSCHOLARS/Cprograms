#include <stdio.h> 
int main()
{ 
	int i, j, product;
	int row[10],column[10];
	int matrix[10][10];
	int max_eachRow[10];
    int max_eachColumn[10];
    int max_for_all;
    int dif_matrix[10][10];

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
	printf("\n");
	for (i = 0; i <= 9; i++){
		max_eachRow[i] = matrix[i][0];
		for (j = 1; j <= 9; j++){
			if (matrix[i][j]>max_eachRow[i]){
				max_eachRow[i] = matrix[i][j];
			}
		}
	}
    for(i=0; i<=9; i++)
    {
        max_eachColumn[i]=matrix[0][i];
        for(j=0; j<=9; j++)
        {
            if(matrix[j][i]>max_eachColumn[i])
            {
                max_eachColumn[i]=matrix[j][i];
            }
        }
    }
    max_for_all=max_eachRow[0];
    for(i=0; i<=9; i++)
    {
        if(max_eachRow[i]>max_for_all)
        {
            max_for_all=max_eachRow[i];
        }
        if(max_eachColumn[i]>max_for_all)
        {
            max_for_all=max_eachColumn[i];
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
    printf(" max ");
    for(i=0; i<=9; i++)
    {
        printf("%3d  ",max_eachColumn[i]);
    }
    printf("\n");
    printf("_each\nColumn\n");
    printf("max_for_all: %d\n",max_for_all);
    for(i=0; i<=9; i++)
    {
        for(int j=0; j<=9; j++)
        {
            dif_matrix[i][j]=matrix[i][j]-max_for_all;
        }
    }
    printf("     ");
	for  (j  =  0;  j  <=9;  j++){
		printf("'%2d '", column[j]);
	}
	printf("\n"); 

	for  (i  =  0;  i  <= 9;  i++){
		printf("'%2d '", row[i]);
		for  (j  =  0;  j  <=9;  j++){
			printf("%3d  ", dif_matrix[i][j]);
		}
		printf("\n"); 
	}
}