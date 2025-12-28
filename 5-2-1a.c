#include<stdio.h>

int main(){
    int i;
    int a,b,c,d,e,f,g,h;

    /* ６！の計算 */
    a=1;
    for (i=2;i<=6;i++){
        a=a*i;
    }

    /* ９！の計算 */
    b=1;
    for (i=2;i<=9;i++){
        b=b*i;
    }

    /* １１！の計算 */
    c=1;
    for (i=2;i<=11;i++){
        c=c*i;
    }

    /* １２！の計算 */
    d=1;
    for (i=2;i<=12;i++){
        d=d*i;
    }
    f=1;
    for(i=2;i<=5;i++){
        f=f*i;
    }
    g=1;
    for(i=2;i<=3;i++){
        g=g*i;
    }
    h=f+g;

/* １１！＋１２！の計算 */
    e=c+d;

    printf("6!=%d 9!=%d 11!+12!=%d 5!=%d 3!=%d 5!+3!=%d\n",a,b,e,f,g,h);
}