#include<stdio.h>
int p(int x, int y){
    int P=1;
    for(int i=x; i>=x-y+1; i--){
        P*=i;
    }
    return P;
}
int main(){
    int a=3,b=2,c=5;
    printf("%dP%d=%d\n",a,b,p(3,2));
    printf("%dP%d=%d\n",c,a,p(5,3));
}