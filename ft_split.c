#include <stdlib.h>
#include "libft.h"

static size_t ft_quantity(char const *s, char c)
{
	size_t	k;
	size_t	i;

	k = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			return (k);
		while (s[i] != c && s[i])
			i++;
		k++;
	}
	return(k);
}
static size_t ft_word(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(s[i])
	{
		while (s[i] == c && s[i])
		{
			i++;
			j++;
		}
		while (s[i] != c && s[i])
			i++;
		return (i - j);
	}
	return(0);
}

static void *ft_free(char **s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		free(s1[i]);
		i++;
	}
	free(s1);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	char **s1;
	size_t	k;
	size_t	i;
    size_t  j;

	if(!s)
		return (NULL);
	k = -1;
    j = ft_quantity(s,c);
	s1 = malloc((j + 1) * sizeof(char *));
	if(!s1)
		return (NULL);
	while (k++, k < j)
	{
        i = -1;
        s1[k] = malloc((ft_word(s,c) + 1));
		if (!s1[k])
			return (ft_free(s1));
		while(i++,i < ft_word(s,c))
		{
			while(*s == c && *s)
				s++;
			s1[k][i] = s[i];
		}
		s1[k][i] = '\0';
		while(*s != c && *s)
			s++;
	}
    s1[j] = NULL;
	return (s1);
}
