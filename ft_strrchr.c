#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	unsigned char tmp;
	int i;

	i = 0;
	while (s[i])
		i++;
	tmp = c;
	while (i--,i != -1)
		if(s[i] == tmp)
			return (char *) (s+i);
	if(c == '\0')
		return (char *)(s + ft_strlen(s));
	return(0);
}
