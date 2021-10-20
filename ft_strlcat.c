#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t size)
{
	size_t i;
	size_t j;

	i = -1;
	j = ft_strlen(dst);
	while(*dst)
		dst++;
	if (size == 0)
		return (ft_strlen(src));
	if (size == 1)
		dst[0] = '\0';
	if (size > 1)
		while (i++, src[i] && i < (size - 1))
			dst[i] = src[i];
	dst[i] = '\0';
	return ((ft_strlen(src)) + j);
}

