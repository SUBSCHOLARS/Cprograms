#include<stdio.h>
int main(){
	int count,i,j;
	int number[100],score[100][3];
	float total_person[100],total_subject[3];
	float aver[3]; 
	for (i=0;i<3;i++){
		total_subject[i]=0;
	}
	for (i=0;i<100;i++){
		total_person[i]=0;
	} 
	printf("Please input the number of students=");
	scanf("%d",&count); 
	for(i=0;i<count;i++){
		printf("Please input Num,Eng,Jap,His=");
		scanf("%d,%d,%d,%d",&number[i],&score[i][0],&score[i][1],&score[i][2]);
	} 
	for(i=0;i<count;i++){
		for(j=0;j<3;j++){
			total_person[i]=total_person[i]+score[i][j];
			total_subject[j]=total_subject[j]+score[i][j];
		}
		printf("number=%d Eng=%d Jap=%d His=%d total=%f\n",number[i],score[i][0],score[i][1],score[i][2],total_person[i]); 
	} 
	printf("Goukei Eng=%f Jap=%f His=%f \n",total_subject[0],total_subject[1],total_subject[2]); 
	for (i=0;i<3;i++){
		aver[i]=total_subject[i]/count;
	} 
	printf("Heikin Eng=%f Jap=%f His=%f \n",aver[0],aver[1],aver[2]); 
}