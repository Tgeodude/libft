#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if(set[i] != *s1)
			i++;
		if (set[i] == *s1 && set[i])
		{
			s1++;
			i = 0;
		}
	}
	i = ft_strlen(s1) - 1;
	while (ft_strrchr(set,s1[i]) != 0)
		i--;
	return (ft_substr(s1,'0',(i + 1)));
}
