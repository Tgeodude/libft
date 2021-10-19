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
	return(k + 1);
}

static size_t ft_word(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(s[i])
	{
		while (s[i] == c)
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

static void ft_free(char **s1, size_t k)
{
	size_t i;

	i = -1;
	while (i++, i < k)
		free(s1[i]);
}

char **ft_split(char const *s, char c)
{
	char **s1;
	size_t	k;
	size_t	i;

	if(!s)
		return (NULL);
	k = -1;
	s1 = malloc((ft_quantity(s,c)) * sizeof(char *));
	if(!s1)
		return (NULL);
	while (k++, s1[k])
	{
		i = -1;
		s1[k] = malloc((ft_word(s,c) + 1) * sizeof(char));
		if (!s1[k])
		{
			ft_free(s1, (k+1));
			return (NULL);
		}
		while(i++,i < ft_word(s,c))
		{
			while(*s == c)
				s++;
			s1[k][i] = s[i];
		}
		s1[k][i] = '\0';
	}
	s1[k] = NULL;
	return (s1);
}
