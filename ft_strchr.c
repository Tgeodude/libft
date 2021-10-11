#include "libft.h"

char *ft_strchr(const char *string, int symbol)
{
	unsigned char tmp;

	tmp = symbol;
	while (*string)
	{
		if(*string == tmp)
			return (char *)string;
		*string++;
	}
}
int main ()
{
	char lotr[] = "_-=Властелин к0лец=-_";
	char * ring = ft_strchr(lotr,'0');
	printf("%c",*ring);
}
