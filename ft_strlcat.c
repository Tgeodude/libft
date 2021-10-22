/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:29:54 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/22 18:36:59 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	j;

	if (ft_strlen(dst) > dstsize)
		k = ft_strlen(src) + dstsize;
	else
		k = ft_strlen(src) + ft_strlen(dst);
	if (dstsize != 0)
	{
		i = 0;
		while (dst[i])
			i++;
		j = -1;
		while (j++, i < (dstsize - 1) && src[j])
		{
			dst[i] = src[j];
			i++;
		}
		dst[i] = '\0';
	}
	return (k);
}

