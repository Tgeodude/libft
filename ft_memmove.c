#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	j;

	if(src < dest)
	{
		i = ft_strlen(src);
		j = ft_strlen(dest);
		while (i--,i > n)
		{
			((unsigned char *)dest)[j] = ((unsigned char *)src)[i];
			j--;
		}
	}
	else
	{
		i = -1;
		j = 0;
		while(i++, i < n)
		{
			((unsigned char *)dest)[j] = ((unsigned char *)src)[i];
			j++;
		}
	}
	return (unsigned char*)dest;
}
