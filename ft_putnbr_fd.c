/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:43:42 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/25 17:46:42 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long int	ft_number(long long int k)
{
	long long int	j;

	j = 1;
	while (k)
	{
		k /= 10;
		j *= 10;
	}
	return (j / 10);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long int	k;
	long long int	i;
	int				a;

	i = n;
	if (i < 0)
	{
		i *= -1;
		ft_putchar_fd('-', fd);
	}
	k = ft_number(i);
	while (k >= 10)
	{
		a = ((i / k) % 10);
		ft_putchar_fd((a + '0'), fd);
		k /= 10;
	}
	if (k < 10)
		ft_putchar_fd(((i % 10) + '0'), fd);
}
