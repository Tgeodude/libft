/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:02:40 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/23 14:02:43 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	i = 0;
	if (!s1)
		return (NULL);
	while (set[i])
	{
		if (set[i] != *s1)
			i++;
		if (set[i] == *s1 && set[i])
		{
			s1++;
			i = 0;
		}
	}
	i = ft_strlen(s1) - 1;
	while (ft_strrchr(set, s1[i]) != 0)
		i--;
	return (ft_substr(s1, (unsigned char) 0, (i + 1)));
}
