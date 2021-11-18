#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char s1[] = "hola";
    char s2[] = "mica";

	unsigned int nb = 2;

	printf("%s", ft_strncat(s1, s2, nb));
	// printf("%s", strcat(dest, src));
}
