#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char src[] = "hola";
	char dest[10];
	unsigned int size;

	size = 3;
	
	//ft_strlcpy(&dest[0], &src[0], size);
	printf("%d", ft_strlcpy(&dest[0], &src[0], size));
}
