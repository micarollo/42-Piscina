#include <stdio.h>

char *ft_strlowcase(char *str);

int main()
{
    char str[] = "miC=/A";
	
	printf("%s", str);
	printf("%s", ft_strlowcase(str));
}
