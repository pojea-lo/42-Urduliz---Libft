/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:32:06 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/11/01 09:32:31 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;

	dest = malloc ((ft_strlen(str) + 1));
	if (dest == NULL)
		return (NULL);
	else
	{
		ft_memcpy (dest, str, ft_strlen(str));
		dest[ft_strlen(str)] = '\0';
	}
	return (dest);
}
