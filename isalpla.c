#include <stdio.h>

char ft_isalpha (char *a)
{
	int	i;

	i = 0;
	if (a[i] == '\0')
		return (0);
	while (a[i] != '\0')
	{
		if (((a[i] < 'A') || (a[i] > 'z')) || ((a[i] > 'Z') && (a[i] < 'a')))
			return (0);
		i++;
	}	
	return (1);
}
int main ()
{
	printf("%i",ft_isalpha(""));
	printf("\n");
}
