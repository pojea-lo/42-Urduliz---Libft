/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:13:24 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/11/17 13:38:51 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	t;

	if (s == NULL)
		return ;
	i = -1;
	t = '\n';
	while (s[++i] != '\0')
	{
		write (fd, &s[i], 1);
	}
	write (fd, &t, 1);
}
