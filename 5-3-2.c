#include<stdio.h>
int sum(int n,int Data[])
{
    int S=0;
    for(int i=0; i<n; i++){
        S+=Data[i];
    }
    return S;
}
double average(int n, int Data[]){
    double ave=(double)sum(n,Data)/n;
    return ave;
}
int main(){
    int n;
    scanf("%d",&n);
    int Eng[n],Jap[n],WolHis[n];
    for(int i=0; i<n; i++){
        scanf("%d,%d,%d",&Eng[i],&Jap[i],&WolHis[i]);
    }
    printf("English:%d Japanese:%d World History:%d\n",sum(n,Eng),sum(n,Jap),sum(n,WolHis));
    printf("Ave English:%lf Ave Jap:%lf Ave WolHis:%lf",average(n,Eng),average(n,Jap),average(n,WolHis));
}