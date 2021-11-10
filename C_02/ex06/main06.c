#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
    char str[] = "hskjdnn!@#>/CX";
    int ret;

    ret = ft_str_is_printable(&str[0]);
    printf("%d", ret);
}
