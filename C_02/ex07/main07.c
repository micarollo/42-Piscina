#include <stdio.h>

char *ft_strupcase(char *str);

int main()
{
    char str[] = "miC=/A";
	
    //ft_strupcase(&str[0]);
	printf("%s", str);
	printf("%s", ft_strupcase(str));
}
