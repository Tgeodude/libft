#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *s3;
	size_t i;
	size_t j;

	s3 = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(unsigned char));
	if (s3 == NULL)
		return(0);
	i = -1;
	j = -1;
	while(i++,s1[i])
		s3[i] = s1[i];
	while(j++,s2[j])
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = 0;
	return(s3);
}
