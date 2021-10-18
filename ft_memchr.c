#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char tmp;
	const char *str;
	size_t	i;

	tmp = c;
	str = s;
	i = -1;
	while(i++,i < n)
		if(str[i] == tmp)
			return (unsigned char *)(str+i);
	return(0);
}
