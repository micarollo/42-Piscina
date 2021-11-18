#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char *argv[])
{
	if(argc == 3)
	{
    int a;
//    int b;

	char *s1;
    s1 = "holaaaa";
    char *s2;
    s2 = "holag";

    a = ft_strncmp(argv[1], argv[2], 6);
    printf("%d\n", a);
    //b = strncmp(s1, s2, 5);
    //printf("%d", b);
	}
}
