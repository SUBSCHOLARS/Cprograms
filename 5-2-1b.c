#include<stdio.h>

/* ｘの階乗を計算する関数  fact(x)  の  定義 */

int fact(int x)              /* 仮引数 x には，呼び出し元の実引数の値が入ってくる．変数 x は，この関数 (fact)の中だけで有効 */
{
    int i;                     /* 変数 i,y は，この関数の中だけで有効 */
    int y;

/* 階乗の計算 */
    y=1;
    for (i=2; i<=x; i++){
        y=y*i;
    }

    return y;                  /* この y の値が fact() の値（戻り値）となる． fact()も y も同じ型（ここではint型）にする． */
}

/* メインプログラム */

int main()
{
    int a,b,c,d,e,f;            /* 変数 a,b,c は，この関数 (main) の中だけで有効 */

    a=fact(6);            /* ６！の計算 fact関数に実引数6が渡される．*/
    b=fact(9);            /* ９！の計算 */
    c=fact(11)+fact(12);  /* １１！＋１２！の計算 */
    d=fact(5);
    e=fact(3);
    f=fact(5)+fact(3);

    printf("6!=%d 9!=%d 11!+12!=%d 5!=%d 3!=%d 5!+3!=%d\n",a,b,c,d,e,f);
    printf("1!=%d\n",fact(1));
    printf("2!=%d\n",fact(2));
    printf("3!=%d\n",fact(3));
    printf("4!=%d\n",fact(4));
    printf("5!=%d\n",fact(5));
    printf("6!=%d\n",fact(6));
    printf("7!=%d\n",fact(7));
    printf("8!=%d\n",fact(8));
    printf("9!=%d\n",fact(9));
    printf("10!=%d\n",fact(10));
    for(int i=1; i<=10; i++){
        printf("%d!=%d\n",i,fact(i));
    }
}