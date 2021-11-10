#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char src[] = "hola";
	char dest[10];
	int count;
	unsigned int n;

	n = 3;
	
	ft_strncpy(&dest[0], &src[0], n);
	
	count = 0;
	while(dest[count])
	{
		write(1, &dest[count], 1);
		count++;
	}	
	return(0);
}
