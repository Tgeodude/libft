#include <stdio.h>

int ft_quantity(char const *s, char c)
{
	int	k;
	int i;

	k = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (i < sizeof(s))
	{
		while(s[i] != c)
			i++;
		k++;
		while(s[i] == c || s[i])
			i++;
	}
	return (k);
}
int main()
{
	printf("%i",ft_quantity("\0\0\0hello\0\0\0world\0\0\0", '\0'));
}
