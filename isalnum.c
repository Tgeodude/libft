#include <stdio.h>
int	ft_isalnum(char *a)
{
	int	i;

	i = 0;
	if (a[i] == '\0')
		return (0);
	while (a[i] != '\0')
	{
		if ((a[i] > '9' && a[i] < 'A') || (a[i] > 'Z' && a[i] < 'a') ||
				(a[i] > 'z' || a[i] < '0'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int main ()
{
	printf("%i",ft_isalnum(""));
	printf("\n");
}
