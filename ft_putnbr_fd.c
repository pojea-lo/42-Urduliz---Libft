/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 20:33:59 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/11/17 10:32:47 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	m;

	m = n;
	if (m < 0)
	{
		ft_putchar_fd ('-', fd);
		m = -m;
	}
	if (m > 9)
		ft_putnbr_fd (m / 10, fd);
	ft_putchar_fd ((m % 10) + '0', fd);
}
