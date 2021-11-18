#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	int a;
	int b;

	char *s1;
	s1 = "holaaaa";
	char *s2;
	s2 = "hola";

	a = ft_strcmp(s1, s2);
	printf("%d\n", a);
	b = strcmp(s1, s2);
	printf("%d", b);
	
}
