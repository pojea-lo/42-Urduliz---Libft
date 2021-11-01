/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:10:27 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/11/01 08:38:14 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen (src);
	dstlen = ft_strlen (dst);
	i = dstlen;
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	while (dstlen < dstsize - 1 && *src)
		*(dst + dstlen++) = *src++;
	*(dst + dstlen) = '\0';
	return (i + srclen);
}
