/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:12:04 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/23 15:27:03 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	cmp(char s1, char s2)
{
	if (s1 == s2)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = -1;
	j = 0;
	k = 0;
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	while (++i < len)
	{
		while (haystack[i] == needle[j] && haystack[i] && i < len)
		{
			if (cmp(haystack[i], needle[j]) == 1)
				k++;
			i++;
			j++;
		}
		if (k == ft_strlen(needle))
			return ((char *)(haystack + i - j));
		k = 0;
		j = 0;
	}
	return (0);
}
