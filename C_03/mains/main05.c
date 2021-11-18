#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    char dest[] = "hola";
    char src[] = "mica";

	unsigned int nb = 0;

	//printf("%u", ft_strlcat(dest, src, nb));
	printf("%lu", strlcat(dest, src, nb));
	printf("%s", dest);
}
