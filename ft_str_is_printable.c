#include<stdio.h>
int ft_str_is_printable(char *str)
{
    if(*str==' ')
        return 0;
    while(*str)
    {
        if(!(*str>=32&&*str<=126))
            return 0;
        str++;
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    printf("%d\n",ft_str_is_printable("Aa\tBC"));
    return 0;
}