/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:37:50 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/11/10 16:19:50 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*cs;

	i = 0;
	cs = (char *)s;
	if (n == 0)
		return (0);
	while (cs[i] != (char)c && i < (n - 1))
		i++;
	if (cs[i] == (char)c)
		return ((void *)cs + i);
	else
		return (0);
}
