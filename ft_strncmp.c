/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:01:03 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/21 17:22:36 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	if (!n)
		return (0);
	while (i++, (s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		if (s1[i + 1] == 0 && s2[i + 1] != 0 && i != (n - 1))
			return (0 - (unsigned char) s1[i]);
		if (s1[i + 1] != 0 && s2[i + 1] == 0 && i != (n - 1))
			return ((unsigned char) s1[i] - 0);
	}
	return (0);
}
