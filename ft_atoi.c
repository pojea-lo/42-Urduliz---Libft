/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:33:56 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/10/29 12:34:51 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	r;

	i = 0;
	n = 1;
	r = 0;
	if (str == NULL)
		return (0);
	while ((str[i] == ' ' || str[i] == '\f' || str[i] == '\n') || \
			(str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -n;
		i++;
	}	
	while (str[i] > 47 && str[i] < 58 && str[i] != '\0')
	{
		r = (str[i] - '0') + (r * 10);
		i++;
	}
	return (r * n);
}
