#include "libft.h"

void *ft_memset(void *buf, int c, size_t len)
{
	unsigned char *tmp;

	tmp = (unsigned char *)buf;
	while (len-- > 0)
		tmp[len] = c;
	return(buf);
}
