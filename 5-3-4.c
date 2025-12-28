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
int score(int n, int r, int Data[]){
    int tmp;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(Data[i]<Data[j]){
                tmp=Data[i];
                Data[i]=Data[j];
                Data[j]=tmp;
            }
        }
    }
    return Data[r-1];
}
int main(){
    int n,r;
    scanf("%d",&n);
    int Eng[n],Jap[n],WolHis[n];
    for(int i=0; i<n; i++){
        scanf("%d,%d,%d",&Eng[i],&Jap[i],&WolHis[i]);
    }
    printf("English:%d Japanese:%d World History:%d\n",sum(n,Eng),sum(n,Jap),sum(n,WolHis));
    printf("Ave English:%lf Ave Jap:%lf Ave WolHis:%lf\n",average(n,Eng),average(n,Jap),average(n,WolHis));
    printf("The 3rd Value of English:%d Japanese:%d World History:%d",score(n,3,Eng),score(n,3,Jap),score(n,3,WolHis));
}