/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:37:50 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/10/28 16:38:14 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	size_t	cc;
	char	*cs;

	i = 0;
	cc = c;
	cs = (char *)s;
	if (n == 0)
		return (0);
	while (cs[i] != (char)cc && cs[i] < (char) n)
		i++;
	if (cs[i] == (char)cc)
		return ((void *)cs + i);
	else
		return (0);
}
