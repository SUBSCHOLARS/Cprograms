#include<stdio.h>
int main(){
    int minNumHei,minNumWei;
    float Data[26][3],minHei,minWei;
    for(int i=0; i<26; i++)
    {
        scanf("%f,%f,%f",&Data[i][0],&Data[i][1],&Data[i][2]);
    }
    minHei=Data[0][1];
    minWei=Data[0][2];
    for(int i=1; i<26; i++)
    {
        if(minHei>Data[i][1])
        {
            minHei=Data[i][1];
            minNumHei=(int)Data[i][0];
        }
        if(minWei>Data[i][2])
        {
            minWei=Data[i][2];
            minNumWei=(int)Data[i][0];
        }
    }
    printf("身長の最小値: No.%d 身長: %.2fcm\n",minNumHei,minHei);
    printf("体重の最小値: No.%d 体重: %.2fkg\n",minNumWei,minWei);
}