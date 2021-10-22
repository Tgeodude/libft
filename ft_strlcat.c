/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:29:54 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/22 18:16:24 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (ft_strlen(dst) > dstsize)
		k = ft_strlen(src) + dstsize;
	if (ft_strlen(dst) <= dstsize)
		k = ft_strlen(src) + ft_strlen(dst);
	if (dstsize != 0)
	{
		while (dst[i])
			i++;
		dst += i;
		i = -1;
		while (++i < (dstsize - 1) && src[i])
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (k);
}

