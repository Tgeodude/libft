/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:16:41 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/21 13:16:58 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			c;
	unsigned char	*tmp_0;
	unsigned char	*tmp_1;

	c = -1;
	tmp_0 = (unsigned char *)src;
	tmp_1 = (unsigned char *)dest;
	while (c++, c < len && ((unsigned char *)dest || (unsigned char *)src))
		tmp_1[c] = tmp_0[c];
	return (dest);
}
