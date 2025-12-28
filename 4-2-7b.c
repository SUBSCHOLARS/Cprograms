#include<stdio.h>
int main(){
    int maxNum,minNum;
    float Num[26][3],maxSub,minSub;
    for(int i=0; i<26; i++)
    {
        scanf("%f,%f,%f",&Num[i][0],&Num[i][1],&Num[i][2]);
    }
    maxSub=Num[0][1]-Num[0][2];
    minSub=Num[0][1]-Num[0][2];
    for(int i=1; i<26; i++)
    {
        if(maxSub<Num[i][1]-Num[i][2])
        {
            maxSub=Num[i][1]-Num[i][2];
            maxNum=(int)Num[i][0];
        }
        if(minSub>Num[i][1]-Num[i][2])
        {
            minSub=Num[i][1]-Num[i][2];
            minNum=(int)Num[i][0];
        }
    }
    printf("気温差が最も大きい都市: No.%d 差: %f\n",maxNum,maxSub);
    printf("気温差が最も小さい都市: No.%d 差: %f\n",minNum,minSub);
}