#include<stdio.h>
int main(){
    int F;
    double CSharp;
    for(int F=0; F<=300; F+=20)
    {
        CSharp=(5.0/9.0)*(F-32);
        printf("Farenheit: %d, Celusius: %lf\n",F,CSharp);
    }
}