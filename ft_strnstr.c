#include "libft.h"

int find_lit(char *big, char *little, int a)
{
	int k;

	k = 0;
	while (big[k] == little[k])
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
	if (ft_strlen(little) == 0)
		return (char *) big;
	while (i++,big[i])
	{
		if (big[i] == little[j])
			k = find_lit((char *)(big + (i)),(char *)(little + (j)),ft_strlen(little));
		if (k == ft_strlen(little))
			return (char *) little;
	}
	return (0);
}
int main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Foo";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 3);
	printf("%s\n",ptr);
}
