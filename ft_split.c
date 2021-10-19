#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t ft_quantity(char const *s, char c)
{
	size_t	i;
	size_t	k;

	i = -1;
	k = 0;
	while(s[i] == c)
		i++;
	if(!s[i])
		return (1);
	while(i++,s[i])
	{
		while(s[i] == c)
			i++;
		if (s[i] == '\0')
			return(k);
		while(s[i] != c && s[i])
			i++;
		k++;
	}
	return (k);
}

size_t ft_word(char const *s, char c)
{
	size_t	i;

	i = -1;
	while(i++,s[i] != c && s[i])
		i++;
	return (i);
}

void ft_free(char **s1, int k) 
{
	int	i;

	i = -1;
	while (i++, i < k)
        free(s1[k]);
    free(s1);
}

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	j;
	char **s1;

	i = 0;
	k = ft_quantity(s,c);
	s1 = malloc(k * sizeof(char));
	k = 0;
	while (s[i])
	{
		while(s[i] == c)
			i++;
		j = ft_word(s,c);
		s1[k] = malloc((j+1) * sizeof(char));
		while (i++,i < j)
			 s1[k][i] = s[i];
		s1[k][i] = '\0';
		k++;
		s += i;
		if(s[i] != '\0')
			i = 0;
	}
	//ft_free(s1,k--);
	return (s1);
}
