#include<stdio.h>
int main(){
    int maxNum,minNum;
    float Num[26][3],max,min;
    for(int i=0; i<26; i++)
    {
        scanf("%f,%f,%f",&Num[i][0],&Num[i][1],&Num[i][2]);
    }
    max=Num[0][1]-Num[0][2];
    min=Num[0][1]-Num[0][2];
    for(int i=1; i<26; i++)
    {
        if(max<Num[i][1])
        {
            max=Num[i][1];
            maxNum=(int)Num[i][0];
        }
        if(min>Num[i][2])
        {
            min=Num[i][2];
            minNum=(int)Num[i][0];
        }
    }
    printf("気温差が最も大きい都市: No.%d 差: %f\n",maxNum,max);
    printf("気温差が最も小さい都市: No.%d 差: %f\n",minNum,min);
}