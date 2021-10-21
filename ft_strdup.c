#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	char *s2;
	size_t i;

	i = -1;
	s2 = malloc(ft_strlen(s) * sizeof(char));
	if (!s2)
		return (NULL);
	while (i++,s[i])
		s2[i] = s[i];
	return (s2);
}
