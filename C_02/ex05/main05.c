#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
    char str[] = "hskjdfhABCX";
    int ret;

    ret = ft_str_is_uppercase(&str[0]);
    printf("%d", ret);
}
