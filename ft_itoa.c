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

static long int	ft_numb(int input)
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

char	*ft_n(int input)
{
	char	*s1;

	if (input == -0)
	{
		s1 = malloc(2);
		s1[0] = '0';
		s1[1] = '\0';
		return (s1);
	}
	s1 = malloc(12);
	s1[0] = '-';
	s1[1] = '2';
	s1[2] = '1';
	s1[3] = '4';
	s1[4] = '7';
	s1[5] = '4';
	s1[6] = '8';
	s1[7] = '3';
	s1[8] = '6';
	s1[9] = '4';
	s1[10] = '8';
	s1[11] = '\0';
	return (s1);
}

char	*ft_itoa(int input)
{
	char		*s1;
	long int	i;

	if (input == -2147483648 || input == -0)
		return (ft_n(input));
	i = ft_numb(input);
	s1 = (char *)malloc(i + 1);
	if (!s1)
		return (NULL);
	if (input < 0)
	{
		s1[0] = '-';
		input = -input;
	}
	s1[i] = 0;
	while (i--, input)
	{
		s1[i] = (input % 10) + '0';
		input /= 10;
	}
	return (s1);
}
