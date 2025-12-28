#include<stdio.h>
int main(){
    float Data[16][3],maxNumNiko,maxNiko,minNumNiko,minNiko,maxNumTaa,maxTaa,minNumTaa,minTaa;
    for(int i=0; i<16; i++)
    {
        scanf("%f,%f,%f",&Data[i][0],&Data[i][1],&Data[i][2]);
    }
    maxNiko=Data[0][1];
    minNiko=Data[0][1];
    maxTaa=Data[0][2];
    minTaa=Data[0][2];
    for(int i=0; i<16; i++)
    {
        if(maxNiko<Data[i][1])
        {
            maxNiko=Data[i][1];
            maxNumNiko=Data[i][0];
        }
        if(minNiko>=Data[i][1])
        {
            minNiko=Data[i][1];
            minNumNiko=Data[i][0];
        }
        if(maxTaa<Data[i][2])
        {
            maxTaa=Data[i][2];
            maxNumTaa=Data[i][0];
        }
        if(minTaa>=Data[i][2])
        {
            minTaa=Data[i][2];
            minNumTaa=Data[i][0];
        }
    }
    printf("ニコチンの含有量最大の銘柄の番号: %d 含有量: %f\n",(int)maxNumNiko,maxNiko);
    printf("ニコチンの含有量最小の銘柄の番号: %d 含有量: %f\n",(int)minNumNiko,minNiko);
    printf("タールの含有量最大の銘柄の番号: %d 含有量: %f\n",(int)maxNumTaa,maxTaa);
    printf("ニコチンの含有量最小の銘柄の番号: %d 含有量: %f\n",(int)minNumTaa,minTaa);
}