#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char *s2;
	size_t i;

	i = -1;
	s2 = malloc(len * sizeof(unsigned char));
	if (s2 == 0)
		return (NULL);
	while (i++,s[start])
	{
		s2[i] = s[start];
		start++;
	}
	return (s2);
}
int main ()
{
	printf("%s", ft_substr("Hello",2,5));
}
