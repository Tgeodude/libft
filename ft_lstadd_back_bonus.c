/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeodude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 21:11:01 by tgeodude          #+#    #+#             */
/*   Updated: 2021/10/26 00:35:38 by tgeodude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst1;

	if (lst && new)
	{
		lst1 = *lst;
		if (*lst)
		{
			while (lst1->next)
				lst1 = lst1->next;
			lst1->next = new;
		}
		else
			*lst = new;
	}
}
