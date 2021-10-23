/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:29:06 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/23 17:40:58 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_numb(int input)
{
	size_t	k;

	if (input < 0)
		k = -input;
	else
		k = input;
	return (k);
}

void	*ft_itoa(int input)
{
	long int	k;
	size_t	i;
	size_t	j;
	char	*buffer;

	k = ft_numb(input);
	i = -1;
	j = -1;
	while (i++, k)
		k /= 10;
	if (input <= 0)
		buffer =(char *) malloc(i + 2);
	else
		buffer =(char *) malloc(i + 1);
	if (!buffer)
		return (NULL);
	if (input < 0)
		buffer[++j] = '-';
	while (j++, i)
	{
		k = ft_numb(input);
		k /= (10 * (--i));
		buffer[j] = (k % 10) + 48;
	}
	buffer[j] = '\0';
	return (buffer);
}
