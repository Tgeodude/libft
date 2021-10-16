#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (i++, (s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		if (s1[i + 1] == 0 && s2[i + 1] != 0)
			return (0 - (unsigned char) s1[i]);
		if (s1[i + 1] != 0 && s2[i + 1] == 0)
			return ((unsigned char) s1[i] - 0);
	}
	return (0);
}
