/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:08:39 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/23 14:11:07 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		tmp;
	const unsigned char	*str;
	size_t				i;

	tmp = (unsigned char)c;
	str = s;
	i = -1;
	while (i++, i < n)
		if (str[i] == tmp)
			return ((unsigned char *)(str + i));
	return (0);
}
