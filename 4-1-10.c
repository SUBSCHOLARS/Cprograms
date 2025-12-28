#include<stdio.h>
int main(){
    int DataSet[5][6],SumVer[6],SumHol[6];
    float Ave[6],FloDatSet[6][5];
    SumVer[5]=0;
    SumHol[5]=0;
    for(int i=0; i<5; i++)
    {
        scanf("%d,%d,%d,%d,%d,%d",&DataSet[i][0],&DataSet[i][1],&DataSet[i][2],&DataSet[i][3],&DataSet[i][4],&DataSet[i][5]);
    }
    for(int i=0; i<5; i++)
    {
        SumVer[i]=0;
        SumHol[i]=0;
        for(int j=0; j<5; j++)
        {
            SumVer[i]+=DataSet[j][i];
        }
        for(int k=1; k<6; k++)
        {
            SumHol[i]+=DataSet[i][k];
        }
    }
    for(int i=0; i<5; i++)
    {
        SumVer[5]+=DataSet[i][5];
        SumHol[5]+=SumHol[i];
    }
    Ave[5]=(float)SumHol[5]/4;
    for(int i=0; i<5; i++)
    {
        Ave[i]=(float)SumHol[i]/4;
        for(int j=0; j<6; j++)
        {
            FloDatSet[j][i]=(float)(DataSet[j][i+1]-DataSet[j][0])/DataSet[j][0];
            if(j==5)
            {
                FloDatSet[j][i]=(float)(SumVer[i+1]-SumVer[0])/SumVer[0];
            }
            if(i==4)
            {
                FloDatSet[j][i]=(float)DataSet[j][5]/DataSet[j][0];
            }
            if(j==5&&i==4)
            {
                FloDatSet[j][i]=(float)SumVer[j]/SumVer[0];
            }
        }
    }
    printf("定員　1年　2年　3年　4年　5年　総計　　平均\n");
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<6; j++)
        {
            printf("%5d",DataSet[i][j]);
        }
        printf("%5d　　%5.2f",SumHol[i],Ave[i]);
        printf("\n");
    }
    for(int i=0; i<6; i++)
    {
        printf("%5d",SumVer[i]);
    }
    printf("%5d　　%5.2f\n",SumHol[5],Ave[5]);
    printf("超過率\n");
    printf("　　1年　　２年　　３年　　４年　　留年\n");
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("　　%4.2f",FloDatSet[i][j]);
        }
        printf("\n");
    }
}