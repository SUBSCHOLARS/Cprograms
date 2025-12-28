#include <stdio.h> 
int main()
{ 
	int i, j;
	int column[10];

	printf("     ");
	for  (j  =  0;  j  <=9;  j++){
		printf("'%2d '", j);
	}
	printf("\n"); 

	for  (i  =  0;  i  <= 9;  i++){
		printf("'%2d '", i);
		for  (j  =  0;  j  <=9;  j++){
			column[j] = i*j;
			printf("%3d  ", column[j]);
		}
		printf("\n"); 
	}
} 