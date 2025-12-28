#include<stdio.h>

int ft_str_is_alpha(char *str)
{
    while(*str)
    {
        if(!(*str>='a'&&*str<='z')&&!(*str>='A'&&*str<='Z'))
            return(0);
        str++;
    }
    return(1);
}
int main(int argc,char *argv[]){
    char *string;
    string="www2w";
    printf("%d\n",ft_str_is_alpha(string));
    return(0);
}