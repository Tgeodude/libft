#include <stdio.h>
#include "libft.h"

int cmp(char s1, char s2)
{
	if(s1 == s2)
		return(1);
	return(0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = -1;
	j = 0;
	k = 0;
	if (ft_strlen(needle) == 0)
		return(char *) haystack;
	while(i++,i < len)
	{
		while(haystack[i] == needle[j] && haystack[i] && i < len)
		{
			if (cmp(haystack[i],needle[j]) == 1)
				k++;
			j++;
			i++;
		}
		if(k == ft_strlen(needle))
			return(char *) (haystack + i - j);
		else
		{
			k = 0;
			j = 0;
		}

	}
	return(0);
}
