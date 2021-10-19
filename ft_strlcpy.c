#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t k;

	k = -1;
	if(size > 1)
		while(k++,k < (size - 1) && src[k])
			dst[k] = src[k];
	if(size == 0)
		return(ft_strlen(src));
	dst[k] = '\0';
	return (ft_strlen(src));
}
