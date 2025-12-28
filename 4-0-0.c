#include <stdio.h> 
int main()
{ 
	int i, j, product;
	printf("     ");
	for  (j  =  0;  j  <=9;  j++){
		printf("'%2d '", j);
	}
	printf("\n"); 

	for  (i  =  0;  i  <= 9;  i++){
		printf("'%2d '", i);
		for  (j  =  0;  j  <=9;  j++){
			product=i*j;
			printf("%3d  ", product);
		}
		printf("\n"); 
	}
} 