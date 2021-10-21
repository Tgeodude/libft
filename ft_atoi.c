#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	h;

	h = 0;
	i = 1;
	while ((*str) == ' ' || ((*str) >= '\t' && (*str) <= '\r'))
		str++;
	if ((*str) == '-' || (*str) == '+')
	{
		if((*str == '-'))
			i = -1;
		str++;
	}
	while ((*str) >= '0' && (*str) <= '9')
	{
		h = (h * 10) + ((*str) - '0');
		str++;
	}
	return (int)(h * i);
}
