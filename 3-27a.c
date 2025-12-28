#include<stdio.h>
int main(){
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            printf("%3d ",(i+1)*(j+1));
            if(j==8)
            {
                printf("\n");
            }
        }
    }
}