/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:13:28 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/23 14:14:04 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (!dest && !src)
		return (NULL);
	if (src < dest)
		while (len--)
			((char *)dest)[len] = ((const char *)src)[len];
	if (src >= dest)
		while (++i < len)
			((char *)dest)[i] = ((const char *)src)[i];
	return ((char *) dest);
}
