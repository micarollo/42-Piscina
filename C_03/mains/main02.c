#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
    char s1[] = "hola";
    char s2[] = "mica";

	printf("%s", ft_strcat(s1, s2));
	// printf("%s", strcat(dest, src));
}
