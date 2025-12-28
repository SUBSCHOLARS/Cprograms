#include<stdio.h>
int main(){
    int Num[26],count1=0,count2=0,count3=0,count4=0;
    float High[26],Low[26],maxSub,minSub;
    double Subt[26];
    for(int i=0; i<26; i++)
    {
        scanf("%d,%f,%f",&Num[i],&High[i],&Low[i]);
        Subt[i]=(double)High[i]-(double)Low[i];
        printf("No.%d High: %f Low: %f Subt:%lf\n",Num[i],High[i],Low[i],Subt[i]);
    }
    for(int i=0; i<26; i++)
    {
        if(Subt[i]>=0.0&&Subt[i]<5.0)
        {
            count1++;
        }
        else if(Subt[i]>=5.0&&Subt[i]<10.0)
        {
            count2++;
        }
        else if(Subt[i]>=10.0&&Subt[i]<15.0)
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