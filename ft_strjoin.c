/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:00:24 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/11/03 13:00:59 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*des;

	des = (char *)malloc ((ft_strlen (s1) + ft_strlen (s2)) + 1);
	if (des == NULL)
		return (NULL);
	ft_strlcpy (des, s1, ft_strlen(s1) + 1);
	ft_strlcat (des, s2, (ft_strlen(s1) + ft_strlen(s2)) + 1);
	return (des);
}
