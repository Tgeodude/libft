#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t c;
	unsigned char *tmp_0;
	unsigned char *tmp_1;

	c = -1;
	tmp_0 = (unsigned char *)src;
	tmp_1 = (unsigned char *)dest;
	while(c++, c < len)
		tmp_1[c] = tmp_0[c];
	return (dest);
}
