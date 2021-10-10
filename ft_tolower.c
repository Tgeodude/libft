#include <stdio.h>

int ft_tolower(int c)
{
	unsigned char tmp;

	tmp = c;
	if (tmp > 64 && tmp < 91 )
		return (tmp + 32);
}
int main ()
{
	printf("%c\n", ft_tolower('9'));
}
