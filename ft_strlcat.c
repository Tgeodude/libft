#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(dst);
	while(dst[i])
		i++;
	dst += i;
	i = 0;
	while(i++, src[i] && i < size)
		dst[i] = src[i];
	return((ft_strlen(src)) + j);
}

