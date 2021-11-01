/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:37:43 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/10/29 13:14:36 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t num)
{
	char	*csrc;
	char	*cdst;
	int		i;	

	i = 0;
	csrc = (char *)src;
	cdst = (char *)dst;
	if (dst == NULL || src == NULL)
		return (NULL);
	if (dst < src)
	{
		while (num--)
			*cdst++ = *csrc++;
		return (dst);
	}
	else
	{
		while (num--)
			*(cdst + num) = *(csrc + num);
		return (dst);
	}
}
