/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:42:12 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/25 17:42:15 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) buf;
	while (len-- > 0)
		tmp[len] = c;
	return (buf);
}
