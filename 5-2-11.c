#include<stdio.h>
int prime(int x){
    int DivCount=0;
    if(x==1){
        return 0;
    }
    for(int i=2; i<=1000; i++){
        if(x%i==0){
            DivCount++;
        }
    }
    if(DivCount==1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int x,PrimeCount=0;
    printf("x=?");
    scanf("%d",&x);
    printf("出力結果:%d\n",prime(x));
    for(int i=1; i<=1000; i++){
        if(prime(i)==1){
            printf("%5d",i);
            PrimeCount++;
            if(PrimeCount%10==0){
                printf("\n");
            }
        }
    }
}