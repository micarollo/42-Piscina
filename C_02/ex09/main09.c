#include <stdio.h>

char *ft_strcapitalize(char *str);
char *ft_strlowcase(char *str);

int main()
{
    char str[] = " ~miC=/A !miCa,roLlo :COMO";
	
	printf("%s", ft_strcapitalize(str));
}
