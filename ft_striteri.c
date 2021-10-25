#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = -1;
	if (s)
		while (i++,s[i])
			f(i,&s[i]);
}
