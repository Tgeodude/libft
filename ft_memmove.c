#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (!dest && !src)
		return (NULL);
	if(src < dest)
		while (len--)
			((char *)dest)[len] = ((const char *)src)[len];
	if (src >= dest)
		while(++i < len)
			((char *)dest)[i] = ((const char *)src)[i];
	return (char*)dest;
}
