/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:58:29 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/10/26 11:14:12 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*cstr;
	char			h;

	i = 0;
	cstr = (unsigned char *)str;
	h = c;
	while (i < len)
	{
		cstr[i] = h;
		i++;
	}
	return (cstr);
}
