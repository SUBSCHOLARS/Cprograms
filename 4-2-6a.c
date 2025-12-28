#include<stdio.h>
int main(){
    int Num[26],maxNum,minNum;
    float High[26],Low[26],max,min;
    for(int i=0; i<26; i++)
    {
        scanf("%d,%f,%f",&Num[i],&High[i],&Low[i]);
    }
    max=High[0];
    min=Low[0];
    for(int i=1; i<26; i++)
    {
        if(max<High[i])
        {
            max=High[i];
            maxNum=Num[i];
        }
        if(min>Low[i])
        {
            min=Low[i];
            minNum=Num[i];
        }
    }
    printf("最高気温が最高の都市: No.%d 差: %f\n",maxNum,max);
    printf("最低気温が最低の都市: No.%d 差: %f\n",minNum,min);
}