/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:20:09 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/11/17 13:36:00 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	r = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (r == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		r[i] = f(i, (char) s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
