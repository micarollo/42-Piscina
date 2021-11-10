#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main()
{
	char *str = "";
	int ret;

	ret = ft_str_is_alpha(str);
	printf("%d", ret);

}
