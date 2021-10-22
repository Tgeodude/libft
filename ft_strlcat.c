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
	size_t	j;

	if (()ft_strlen(dst) < dstsize)
		j = ft_strlen(src) + ft_strlen(dst);
	if (ft_strlen(dst) >= dstsize)
		j = ft_strlen(src) + ft_strlen(dst);
	if(dstsize != 0)
	{
		i = 0;
		while (dst[i])
			i++;
		dst += i;
		i = -1;
		while (++i < (dstsize - 1))
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return(j);
}
