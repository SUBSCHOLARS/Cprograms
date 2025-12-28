#include<stdio.h>
int main(){
    int Capa[5],First[5],Second[5],Third[5],Fourth[5],Fifth[5],Sum[5],VerSum[6],sum,max,maxNum;
    float Ave[5],OF1[5],OF2[5],OF3[5],OF4[5],Re[5],ave,WholeOF[6],VerAve[5],maxAve;
    char per='%',alphabet[5],maxLetter,Grade[5],maxGrade;
    alphabet[0]='A';
    alphabet[1]='B';
    alphabet[2]='C';
    alphabet[3]='D';
    alphabet[4]='E';
    Grade[0]='1';
    Grade[1]='2';
    Grade[2]='3';
    Grade[3]='4';
    Grade[4]='5';
    sum=0;
    for(int i=0; i<6; i++)
    {
        VerSum[i]=0;
    }
    for(int i=0; i<5; i++)
    {
        Sum[i]=0;
        scanf("%d,%d,%d,%d,%d,%d",&Capa[i],&First[i],&Second[i],&Third[i],&Fourth[i],&Fifth[i]);
        Sum[i]=First[i]+Second[i]+Third[i]+Fourth[i]+Fifth[i];
        VerSum[0]+=Capa[i];
        VerSum[1]+=First[i];
        VerSum[2]+=Second[i];
        VerSum[3]+=Third[i];
        VerSum[4]+=Fourth[i];
        VerSum[5]+=Fifth[i];
        Ave[i]=(float)Sum[i]/4;
        OF1[i]=100*(float)(First[i]-Capa[i])/Capa[i];
        OF2[i]=100*(float)(Second[i]-Capa[i])/Capa[i];
        OF3[i]=100*(float)(Third[i]-Capa[i])/Capa[i];
        OF4[i]=100*(float)(Fourth[i]-Capa[i])/Capa[i];
        Re[i]=100*(float)Fifth[i]/Capa[i];
    }
    for(int i=0; i<5; i++)
    {
        sum+=Sum[i];
        VerAve[i]=(float)VerSum[i]/5;
    }
    ave=(float)sum/4;
    for(int i=1; i<6; i++)
    {
        WholeOF[i]=100*(float)(VerSum[i]-VerSum[0])/VerSum[0];
        if(i==5)
        {
            WholeOF[i]=100*(float)VerSum[i]/VerSum[0];
        }
    }
    for(int i=0; i<5; i++)
    {
        printf("%7d%7d%7d%7d%7d%7d%7d  %7.7f  %7.7f%c  %7.7f%c  %7.7f%c  %7.7f%c  %7.7f%c\n",Capa[i],First[i],Second[i],Third[i],Fourth[i],Fifth[i],Sum[i],Ave[i],OF1[i],per,OF2[i],per,OF3[i],per,OF4[i],per,Re[i],per);
    }
    for(int i=0; i<6; i++)
    {
        printf("%7d",VerSum[i]);
    }
    printf("%7d  %7.7f  ",sum,ave);
    for(int i=1; i<6; i++)
    {
        printf("%7.7f%c  ",WholeOF[i],per);
    }
    printf("\n総計の最も多い学科\n");
    max=Sum[0];
    maxLetter=alphabet[0];
    maxAve=VerAve[0];
    for(int i=1; i<5; i++)
    {
        if(max<Sum[i])
        {
            max=Sum[i];
            maxLetter=alphabet[i];
        }
        if(maxAve<VerAve[i])
        {
            maxAve=VerAve[i];
            maxGrade=Grade[i];
        }
    }
    printf("%c学科: %d人\n",maxLetter,max);
    printf("学年別在籍数の平均が最多の学年\n");
    printf("%c学年: %f人\n",maxGrade,maxAve);
}