/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:47:55 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/25 17:48:12 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	s1 = (char *)malloc(ft_strlen(s) + 1);
	if (!s1)
		return (NULL);
	while (i++, i < ft_strlen(s))
		s1[i] = (*f)(i, s[i]);
	s1[i] = 0;
	return (s1);
}
