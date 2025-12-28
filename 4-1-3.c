#include<stdio.h>
int main(){
    int Fac[11],ThisYear[11],LastYear[11],Sub[11];
    for(int i=0; i<11; i++)
    {
        scanf("%d,%d,%d",&Fac[i],&ThisYear[i],&LastYear[i]);
        Sub[i]=ThisYear[i]-LastYear[i];
    }
    printf("学科番号 ｜ 本年度の人数 ｜ 昨年度の人数 ｜ 本年度と昨年度の差｜\n");
    for(int j=0; j<11; j++)
    {
        printf("%8d ｜ %12d ｜ %12d ｜ %18d｜\n",Fac[j],ThisYear[j],LastYear[j],Sub[j]);
    }
    printf("学科番号が10番台の学科の学科番号と本年度・昨年度志願者数\n");
    printf("学科番号 ｜ 本年度の人数 ｜ 昨年度の人数｜\n");
    for(int j=0; j<11; j++)
    {
        if(Fac[j]>=10&&Fac[j]<20)
        {
            printf("%8d ｜ %12d ｜ %12d｜\n",Fac[j],ThisYear[j],LastYear[j]);
        }
    }
    printf("昨年度より今年度の志願者数が増えている学科の学科番号と本年度・昨年度志願者数\n");
    printf("学科番号 ｜ 本年度の人数 ｜ 昨年度の人数｜\n");
    for(int j=0; j<11; j++)
    {
        if(Sub[j]>0)
        {
            printf("%8d ｜ %12d ｜ %12d｜\n",Fac[j],ThisYear[j],LastYear[j]);
        }
    }
}