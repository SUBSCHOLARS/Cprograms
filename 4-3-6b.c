#include<stdio.h>
int main(){
    int count=0;
    float Num[26][4],ave,sum=0;
    for(int i=0; i<26; i++)
    {
        scanf("%f,%f,%f",&Num[i][0],&Num[i][1],&Num[i][2]);
        Num[i][3]=Num[i][1]-Num[i][2];;
        sum+=Num[i][3];
    }
    ave=sum/26;
    printf("Average: %f\n",ave);
    for(int i=0; i<26; i++)
    {
        if(Num[i][3]>ave)
        {
            printf("No.%dの最高気温と最低気温の差は差の平均以上です\n",(int)Num[i][0]);
            count++;
        }
    }
    printf("高気温と最低気温の差が差の平均以上である都市の数: %d",count);
}