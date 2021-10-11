#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	unsigned char tmp;
	size_t i;

	i = 0;
	while (s[i])
		i++;
	tmp = c;
	while (i--,i != -1)
		if(s[i] == tmp)
			return (char *) (s+i);
}
int main ()
{
	char lotr[] = "_-=Властелин к0лец=-_";
	char * ring = ft_strrchr(lotr,'0');
	printf("%c",*ring);
}
