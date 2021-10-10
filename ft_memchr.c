#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char tmp;
	const char *str;

	tmp = c;
	str = s;
	while(*str)
	{
		if(*str == tmp)
			return (char *)str;
		*str++;
	}
}

int main ()
{
	char lotr[] = "_-=Властелин к0лец=-_";
	char * ring = ft_memchr(lotr,'0', 30);
	printf("%c",*ring);
}

