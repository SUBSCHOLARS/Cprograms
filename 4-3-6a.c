#include<stdio.h>
int main(){
    int Num[26],count=0;
    float High[26],Low[26],Subt[26],ave,sum=0;
    for(int i=0; i<26; i++)
    {
        scanf("%d,%f,%f",&Num[i],&High[i],&Low[i]);
        Subt[i]=High[i]-Low[i];
        sum+=Subt[i];
    }
    ave=sum/26;
    printf("Average: %f\n",ave);
    for(int i=0; i<26; i++)
    {
        if(Subt[i]>ave)
        {
            printf("No.%dの最高気温と最低気温の差は差の平均以上です\n",Num[i]);
            count++;
        }
    }
    printf("高気温と最低気温の差が差の平均以上である都市の数: %d",count);
}