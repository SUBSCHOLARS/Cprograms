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
int max(int n, int Data[]){
    int max=Data[0];
    for(int i=1; i<n; i++){
        if(max<Data[i]){
            max=Data[i];
        }
    }
    return max;
}
int min(int n, int Data[]){
    int min=Data[0];
    for(int i=1; i<n; i++){
        if(min>Data[i]){
            min=Data[i];
        }
    }
    return min;
}
int main(){
    int n;
    scanf("%d",&n);
    int Eng[n],Jap[n],WolHis[n];
    for(int i=0; i<n; i++){
        scanf("%d,%d,%d",&Eng[i],&Jap[i],&WolHis[i]);
    }
    printf("English:%d Japanese:%d World History:%d\n",sum(n,Eng),sum(n,Jap),sum(n,WolHis));
    printf("Ave English:%lf Ave Jap:%lf Ave WolHis:%lf\n",average(n,Eng),average(n,Jap),average(n,WolHis));
    printf("Max Eng:%d Max Jap:%d Max WolHis:%d\n",max(n,Eng),max(n,Jap),max(n,WolHis));
    printf("Min Eng:%d Min Jap:%d Min WolHis:%d\n",min(n,Eng),min(n,Jap),min(n,WolHis));
}