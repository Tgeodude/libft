#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	int	j;
	int	k;
	int	i;
	int	a;

	j = -1;
	i = n;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else 
	{
		if (i < 0)
		{
			i = -n;
			ft_putchar_fd('-', fd);
		}
		k = i;
		while (j++, k)
			k /= 10;
		k = 1;
		while (j != 0)
		{
			k *= 10;
			j--;
		}
		while (k >= 10)
		{
			a = ((i / k) % 10);
			ft_putchar_fd((a + '0'), fd);
			k /= 10;
		}
		if (k == 1)
			ft_putchar_fd(((i % 10) + '0'), fd);
	}
}
