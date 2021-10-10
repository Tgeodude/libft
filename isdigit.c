#include <stdio.h>

int	ft_isdigit(char *a)
{
	int	i;

	i = 0;
	if (a[i] == '\0')
		return (0);
	while (a[i] != '\0')
	{
		if(a[i] > '9' || a[i] < '0')
			return (0);
		i++;
	}
	return (1);
}
int main ()
{
	printf("%i", ft_isdigit("1"));
	printf("\n");
}
