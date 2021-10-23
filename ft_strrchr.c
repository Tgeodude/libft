/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:34:27 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/23 15:35:15 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	tmp;
	int				i;

	i = 0;
	while (s[i])
		i++;
	tmp = c;
	while (i--, i != -1)
		if (s[i] == tmp)
			return ((char *)(s + i));
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	return (0);
}
