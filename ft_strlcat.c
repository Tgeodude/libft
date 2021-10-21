/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:29:54 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/21 15:32:16 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = -1;
	k = ft_strlen(dst);
	i = k;
	if (ft_strlen(dst) > size || size == 0)
		return (ft_strlen(src) + size);
	while (j++, j < (size - k - 1))
	{
		dst[i] = src[j];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
