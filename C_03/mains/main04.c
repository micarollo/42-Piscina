#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char s1[] = "holaholamica";
	char s2[] = "lami";

	printf("%s", ft_strstr(&s1[0], &s2[0]));
//	printf("%d", ft_strstr(&s1[0], &s2[0]));
	//printf("%s", strstr(&s1[0], &s2[0]));
}
