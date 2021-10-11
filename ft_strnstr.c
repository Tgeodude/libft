#include "libft.h"

int find_lit(char *big, char *little, int a)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	while (big[i] == little[j])
		k++;
	if (k == a)
		return(k);
	return(0);
}

char *ft_strnstr (const char *big, const char *little, size_t len)
{
	unsigned char tmp;
	size_t i;
	size_t j;
	int k;

	i = -1;
	j = 0;
	if (little == 0)
		return (char *) big;
	while (i++,i <= len )
	{
		if (big[i] == little[j])
			k = find_lit(big[i],little[j],ft_strlen(little));
		if (k == ft_strlen(little) && big[i])
			return(k);
	}
	return (0);
}
