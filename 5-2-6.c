#include<stdio.h>
int compare(int x, int y){
    if(x>y){
        return 1;
    }
    else if(x==y){
        return 0;
    }
    else{
        return -1;
    }
}
int main(){
    int x,y;
    printf("x,y=?");
    scanf("%d,%d",&x,&y);
    printf("Result=%d\n",compare(x,y));
}