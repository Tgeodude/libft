#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = s1;
	str2 = s2;
	i = -1;
	while (i++, (str1[i] != 0 || str2[i] != 0) && i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		if (str1[i + 1] == 0 && str2[i + 1] != 0)
			return (0 - (unsigned char) str1[i]);
		if (str1[i + 1] != 0 && str2[i + 1] == 0)
			return ((unsigned char) str1[i] - 0);
	}
	return (0);
}

