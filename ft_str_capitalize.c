#include<stdio.h>
int ft_str_is_lowercase(char str)
{
    if(str>='a'&&str<='z')
        return 1;
    return 0;
}
char *ft_strcapitalize(char *str)
{
    int i;
    i=1;
    if(ft_str_is_lowercase(*str))
        *str-=32;
    while(str[i])
    {
        if(str[i]==' '||str[i]=='+')
            if(str[i+1]>='a'&&str[i+1]<='z')
                str[i+1]-=32;
        if(str[i]>='A'&&str[i]<='Z')
            if(str[i-1]>='a'&&str[i-1]<='z')
                str+=32;
        i++;
    }
    return(str);
}
int main(int argc, char const *argv[])
{
    char string[64]="salut,""comMent to vas? 42mots quarante-deux; cinquante+et+un";
    printf("%s",ft_strcapitalize(string));
    return 0;
}