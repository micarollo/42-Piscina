#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
	char *str = "102a#746";
	int ret;

	ret = ft_str_is_numeric(str);
	printf("%d", ret);
}
