#include <stdio.h>

int	ft_isprint(char *a)
{
	int	i;

	i = 0;
	if (a[i] == '\0')
		return (0);
	while (a[i] != '\0')
	{
		if ((a[i] >= 0 && a[i] <= 31) || a[i] == 128)
			return (0);
		i++;
	}
	return (1);
}
int main ()
{
	printf("%i", ft_isprint("привет"));
	printf("\n");
}
