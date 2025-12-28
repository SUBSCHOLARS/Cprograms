#include<stdio.h>
int ft_str_is_numeric(char *str)
{
    while(*str)
    {
        if(!(*str>='0'&&*str<='9'))
        {
            return 0;
        }
        str++;
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    printf("%d\n",ft_str_is_numeric("12945"));
    return 0;
}