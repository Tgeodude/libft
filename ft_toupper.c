#include "libft.h"

int ft_toupper(int c)
{
	unsigned char tmp;

	tmp = c;
	if (tmp > 96 && tmp < 123 )
		return (tmp - 32);
}
int main ()
{
	printf("%c\n", ft_toupper('d'));
}
