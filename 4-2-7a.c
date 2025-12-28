#include<stdio.h>
int main(){
    int Num[26],maxNum,minNum;
    float High[26],Low[26],maxSub,minSub;
    for(int i=0; i<26; i++)
    {
        scanf("%d,%f,%f",&Num[i],&High[i],&Low[i]);
    }
    maxSub=High[0]-Low[0];
    minSub=High[0]-Low[0];
    for(int i=1; i<26; i++)
    {
        if(maxSub<High[i]-Low[i])
        {
            maxSub=High[i]-Low[i];
            maxNum=Num[i];
        }
        if(minSub>High[i]-Low[i])
        {
            minSub=High[i]-Low[i];
            minNum=Num[i];
        }
    }
    printf("気温差が最も大きい都市: No.%d 差: %f\n",maxNum,maxSub);
    printf("気温差が最も小さい都市: No.%d 差: %f\n",minNum,minSub);
}