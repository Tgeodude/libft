/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:36:50 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/20 19:39:08 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	unsigned char	*array;
	size_t			i;

	i = -1;
	array = malloc(size * number);
	if (!array)
		return (NULL);
	while (i++, i < number)
		array[i] = '\0';
	return (array);
}
