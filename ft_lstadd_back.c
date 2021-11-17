/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:24:17 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/11/16 11:24:55 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ls;

	ls = *lst;
	if (ls == NULL)
		*lst = new;
	else
	{
		while (ls->next != NULL)
			ls = ls->next;
		ls->next = new;
	}
}
