/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:29:06 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/24 20:45:47 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long  int	ft_numb(int input)
{
	int	i;
	int	k;

	k = 0;
	i = -1;
	if (input <= 0)
		k++;
	while (i++, input)
		input /= 10;
	return (i + k);
}

char	*ft_itoa(int input)
{
	char		*s1;
	long int	i;
	int	k;

	k = 0;
	if (input == -2147483648)
	{
		s1 = malloc(ft_numb(input) + 1);
		s1 = "-2147483648\0";
		return (s1);
	}
	i = ft_numb(input);
	s1 = (char *)malloc(i + 1);
	if (!s1)
		return (NULL);
	if (input < 0)
	{
		s1[0] = '-';
		k = 1;
		input = -input;
	}
	s1[i] = 0;
	while(i--, input)
	{
		s1[i] = (input % 10) + '0';
		input /= 10;
	}
	return (s1);
}
