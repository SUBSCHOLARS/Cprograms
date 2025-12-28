#include<stdio.h>
int main(){
    int Num[26],minNumHei,minNumWei;
    float Height[26],Weight[26],minHei,minWei;
    for(int i=0; i<26; i++)
    {
        scanf("%d,%f,%f",&Num[i],&Height[i],&Weight[i]);
    }
    minHei=Height[0];
    minWei=Weight[0];
    for(int i=1; i<26; i++)
    {
        if(minHei>Height[i])
        {
            minHei=Height[i];
            minNumHei=Num[i];
        }
        if(minWei>Weight[i])
        {
            minWei=Weight[i];
            minNumWei=Num[i];
        }
    }
    printf("身長の最小値: No.%d 身長: %.2fcm\n",minNumHei,minHei);
    printf("体重の最小値: No.%d 体重: %.2fkg\n",minNumWei,minWei);
}