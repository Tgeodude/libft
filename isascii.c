#include <stdio.h>

int	ft_isascii(char *a)
{
	int	i;

	i = -1;
	while (i++, a[i] != '\0')
		if (a[i] < 0 || a[i] > 127)
			return (0);
	return (1);
}
int	main ()
{
	printf("%i",ft_isascii("привет"));
	printf("\n");
}
