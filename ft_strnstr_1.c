#include <stdio.h>
#include "libft.h"

int cmp(char s1, char s2)
{
	if(s1 == s2)
		return(1);
	return(0);
}

char *ft_kek(const char * big,const char * little, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = -1;
	j = 0;
	k = 0;
	if (ft_strlen(little) == 0)
		return(char *) big;
	while(i++,i < len)
	{
		while(big[i] == little[j] && big[i] && i < len)
		{
			if (cmp(big[i],little[j]) == 1)
				k++;
			j++;
			i++;
		}
		if(k == ft_strlen(little))
			return(char *) little;
		else
		{
			k = 0;
			j = 0;
		}

	}
	return(0);
}
int main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "";
	char *ptr;

	ptr = ft_kek(largestring, smallstring, 0);
	printf("%s",ptr);
}

