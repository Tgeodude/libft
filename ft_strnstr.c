/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:12:04 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/24 18:33:46 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (++i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] == haystack[i + j] && i + j < len && haystack[i + j])
			{
				if (!needle[j + 1])
					return ((char *)(haystack + i));
				j++;
			}
		}
	}
	return (0);
}
