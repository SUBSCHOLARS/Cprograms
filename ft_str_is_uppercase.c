#include<stdio.h>
int ft_str_is_uppercase(char *str)
{
    while(*str)
    {
        if(!(*str>='A'&&*str<='Z'))
            return 0;
        str++;
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    char input[100];
    printf("Please input: ");
    scanf("%s",&input);
    printf("%d\n",ft_str_is_uppercase(input));
    return 0;
}