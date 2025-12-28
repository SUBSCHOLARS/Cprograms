#include<stdio.h>
int main(){
    int maxNum,minNum,count1=0,count2=0,count3=0,count4=0;
    float Num[26][4],maxSub,minSub;
    for(int i=0; i<26; i++)
    {
        scanf("%f,%f,%f",&Num[i][0],&Num[i][1],&Num[i][2]);
        Num[i][3]=Num[i][1]-Num[i][2];
    }
    for(int i=0; i<26; i++)
    {
        if(Num[i][3]>=0.0&&Num[i][3]<5.0)
        {
            count1++;
        }
        else if(Num[i][3]>=5.0&&Num[i][3]<10.0)
        {
            count2++;
        }
        else if(Num[i][3]>=10.0&&Num[i][3]<15.0)
        {
            count3++;
        }
        else
        {
            count4++;
        }
    }
    printf("最高気温と最低気温の差による分類\n");
    printf("0~5℃未満: %d\n",count1);
    printf("5~10℃未満: %d\n",count2);
    printf("10~15℃未満: %d\n",count3);
    printf("それ以外: %d\n",count4);
}