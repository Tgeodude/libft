/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:18:05 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/23 14:18:37 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	i;

	i = -1;
	s2 = malloc(ft_strlen(s) + 1);
	if (!s2)
		return (NULL);
	while (i++, s[i])
		s2[i] = s[i];
	s2[i] = '\0';
	return (s2);
}
