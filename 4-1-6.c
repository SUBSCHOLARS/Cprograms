#include<stdio.h>
#include<math.h>
int main(){
    int n,Sum,SumSecP;
    float Ave,Disp,StdDiv;
    Sum=0;
    SumSecP=0;
    scanf("%d",&n);
    int Num[n],Score[n];
    float DivVal[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d,%d",&Num[i],&Score[i]);
        Sum+=Score[i];
        SumSecP+=Score[i]*Score[i];
    }
    Ave=(float)Sum/n;
    Disp=((float)SumSecP/n)-Ave*Ave;
    StdDiv=sqrt(Disp);
    for(int i=0; i<n; i++)
    {
        DivVal[i]=(10*(Score[i]-Ave)/StdDiv)+50;
    }
    printf("全体の平均: %.2f\n",Ave);
    printf("分散: %.2f\n",Disp);
    printf("標準偏差: %.2f\n",StdDiv);
    printf("学生番号: 点数: 偏差値:\n");
    for(int i=0; i<n; i++)
    {
        printf("%8d%6d%7.2f\n",Num[i],Score[i],DivVal[i]);
    }
}