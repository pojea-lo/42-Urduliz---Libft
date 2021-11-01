/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:08:59 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/10/26 11:32:31 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *org, size_t n)
{
	size_t	i;
	char	*cdest;
	char	*corg;
	void	*ccdest;

	cdest = (char *)dest;
	corg = (char *)org;
	i = 0;
	while (i < n)
	{
		cdest[i] = corg[i];
		i++;
	}
	ccdest = (void *)cdest;
	return (ccdest);
}
