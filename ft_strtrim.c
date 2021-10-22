#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int ft_head(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t k;

	i = -1;
	j = 0;
	k = -1;
	while(i++,set[i])
	{
		if(set[i] == s1[j])
		{
			i = -1;
			k = j;
			j++;
		}
	}
	return(k + 1);
}

int ft_end(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t k;

	j = ft_strlen(s1);
	j--;
	k = j;
	i = 0;
	while(i++,set[i])
	{
		if(set[i] == s1[j])
		{
			i = -1;
			k = j;
			j--;
		}

	}
	if(k == (ft_strlen(s1) - 1))
		return (k);
	return (k - 1);
}
char *ft_strtrim(char const *s1, char const *set)
{
	char *s2;
	int i;

	i = -1;
	s2 = malloc((ft_strlen - ft_head(s1,set) - (ft_strlen - ft_end(s1,set))));
	if(ft_head(s1,set) > 0)
	s1 = s1 + ft_head(s1,set);
	while (i++,i <= ft_end(s1,set))
		s2[i] = s1[i];
	return(s2);
}
