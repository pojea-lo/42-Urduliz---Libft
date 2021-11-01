/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 08:49:59 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/11/01 08:50:56 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (nee[i] == '\0')
		return ((char *)hay);
	while (hay[i] != '\0')
	{
		j = 0;
		while (nee[j] == hay[i + j] && (i + j) < len)
		{
			if (nee[j + 1] == '\0')
				return ((char *)hay + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
