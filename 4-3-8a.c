#include<stdio.h>
int main(){
    int Num[16],maxNumNiko,minNumNiko,maxNumTaa,minNumTaa;
    float Niko[16],Taar[16],maxNiko,minNiko,maxTaa,minTaa;
    for(int i=0; i<16; i++)
    {
        scanf("%d,%f,%f",&Num[i],&Niko[i],&Taar[i]);
    }
    maxNiko=Niko[0];
    minNiko=Niko[0];
    maxTaa=Taar[0];
    minTaa=Taar[0];
    for(int i=0; i<16; i++)
    {
        if(maxNiko<Niko[i])
        {
            maxNiko=Niko[i];
            maxNumNiko=Num[i];
        }
        if(minNiko>=Niko[i])
        {
            minNiko=Niko[i];
            minNumNiko=Num[i];
        }
        if(maxTaa<Taar[i])
        {
            maxTaa=Taar[i];
            maxNumTaa=Num[i];
        }
        if(minTaa>=Taar[i])
        {
            minTaa=Taar[i];
            minNumTaa=Num[i];
        }
    }
    printf("ニコチンの含有量最大の銘柄の番号: %d 含有量: %f\n",maxNumNiko,maxNiko);
    printf("ニコチンの含有量最小の銘柄の番号: %d 含有量: %f\n",minNumNiko,minNiko);
    printf("タールの含有量最大の銘柄の番号: %d 含有量: %f\n",maxNumTaa,maxTaa);
    printf("ニコチンの含有量最小の銘柄の番号: %d 含有量: %f\n",minNumTaa,minTaa);
}