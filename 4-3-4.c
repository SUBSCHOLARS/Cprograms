#include<stdio.h>
int main(){
    int maxNum,minNum,count1=0,count2=0,count3=0;
    float Num[26][3],maxSub,minSub;
    for(int i=0; i<26; i++)
    {
        scanf("%f,%f,%f",&Num[i][0],&Num[i][1],&Num[i][2]);
        if(Num[i][1]<=0.0&&Num[i][2]<0.0)
        {
            count1++;
        }
        else if(Num[i][1]>=10.0&&Num[i][2]>=10.0)
        {
            count2++;
        }
        else if(Num[i][1]>=10.0&&(Num[i][2]>=0.0&&Num[i][2]<10.0))
        {
            count3++;
        }   
    }
    printf("最高気温と最低気温による分類\n");
    printf("最高気温，最低気温ともに，０度未満の都市: %d\n",count1);
    printf("最高気温，最低気温ともに，１０度以上の都市: %d\n",count2);
    printf("最高気温が１０度以上，最低気温が０度以上～１０度未満の都市: %d\n",count3);
}