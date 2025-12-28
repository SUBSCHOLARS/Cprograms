#include<stdio.h>
int main(){
    int DataSet[11][3],subt[11];
    printf("学科番号　本年度　昨年度　前年度との差\n");
    for(int i=0; i<11; i++)
    {
        scanf("%d,%d,%d",&DataSet[i][0],&DataSet[i][1],&DataSet[i][2]);
        subt[i]=DataSet[i][1]-DataSet[i][2];
        printf("%5d      %3d      %3d      %3d\n",DataSet[i][0],DataSet[i][1],DataSet[i][2],subt[i]);
    }
    printf("学科番号が10番台の学科の学科番号と本年度・昨年度志願者数\n");
    printf("学科番号　本年度　昨年度\n");
    for(int j=0; j<11; j++)
    {
        if(DataSet[j][0]>=10&&DataSet[j][0]<20)
        {
            printf("%5d      %3d      %3d\n",DataSet[j][0],DataSet[j][1],DataSet[j][2]);
        }
    }
    printf("昨年度より今年度の志願者数が増えている学科の学科番号と本年度・昨年度志願者数\n");
    printf("学科番号　本年度　昨年度\n");
    for(int j=0; j<11; j++)
    {
        if(subt[j]>0)
        {
            printf("%5d      %3d      %3d\n",DataSet[j][0],DataSet[j][1],DataSet[j][2]);
        }
    }
}