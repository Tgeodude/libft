/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:47:20 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/20 19:50:57 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t k;

	k = -1;
	if (size > 1)
		while (k++, k < (size - 1) && src[k])
			dst[k] = src[k];
	if(size == 0)
		return (ft_strlen(src));
	if (size == 1)
		dst[0] = '\0';
	dst[k] = '\0';
	return (ft_strlen(src));
}
