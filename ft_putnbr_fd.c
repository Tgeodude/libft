#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	int	j;
	int	k;
	int	i;
	int	a;

	j = 0;
	i = n;
	if (n == -2147483648)
		write(fd, &n, 11);
	else 
	{
		if (i < 0)
			i = -n;
		k = i;
		while (j++, k)
			k /= 10;
		k = 1;
		while (j--)
			k *= 10;
		while (k)
		{
			a = ((i / k) % 10);
			write(fd, &a, 1);
			k /= 10;
		}
	}
}
