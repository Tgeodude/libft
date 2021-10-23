/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:17:11 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/23 15:30:59 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	unsigned char	tmp;

	tmp = symbol;
	while (*string)
	{
		if (*string == tmp)
			return ((char *)string);
		string++;
	}
	if (symbol == '\0')
		return ((char *)(string + ft_strlen(string)));
	return (0);
}
