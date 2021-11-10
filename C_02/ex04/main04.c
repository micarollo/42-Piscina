#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
    char *str = "";
    int ret;

    ret = ft_str_is_lowercase(str);
    printf("%d", ret);
}
