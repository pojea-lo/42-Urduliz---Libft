/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:24:48 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/11/16 17:26:00 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*prv;
	t_list	*res;

	if (!lst || !f)
		return (NULL);
	res = NULL;
	while (lst)
	{
		prv = ft_lstnew(f(lst->content));
		if (!prv)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&res, prv);
		lst = lst->next;
	}
	return (res);
}
