#include<stdio.h>
int main(){
    int score, n, i;
	char grade;

	printf("Please input the number of students: ");
	scanf("%d", &n);
  
	for (i = 1; i <= n; i++) {
		printf("Please input score: ");
		scanf("%d", &score);

		if (score >= 90) {
			grade = 'A';
		}
		else if (score >= 80){
			grade = 'B';
		}
		else if (score >= 70){
			grade = 'C';
		}
		else if (score >= 60){
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		printf("Student [%d]: Score is %d. Grade is %c.\n", i, score, grade);
	}
}