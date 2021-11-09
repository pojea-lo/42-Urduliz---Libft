/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:23:46 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/11/07 19:25:18 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set);

static int	ft_finish(char const *s1, char const *set);

static char	*ft_return(char const *s1, int i, int k);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*des;
	int		i;
	int		k;

	i = 0;
	if (*set != 00)
	{
		i = ft_start (s1, set);
		k = ft_finish (s1, set);
	}
	else
	{
		des = malloc(ft_strlen(s1) + 1);
		if (des == NULL)
			return (NULL);
		while (i <= (int)ft_strlen(s1))
		{
			des[i] = s1[i];
			i++;
		}
		return ((char *)des);
	}
	des = ft_return(s1, i, k);
	return (des);
}

static int	ft_start(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && set[j] != '\0')
	{	
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static int	ft_finish(char const *s1, char const *set)
{
	int		j;
	int		k;	

	j = 0;
	k = ft_strlen(s1) - 1;
	while (k >= 0 && set[j] != '\0')
	{	
		if (s1[k] == set[j])
		{
			k--;
			j = 0;
		}
		else
			j++;
	}
	return (k);
}

static char	*ft_return(char const *s1, int i, int k)
{
	char	*des;
	int		j;

	if (i <= k)
	{
		des = malloc(((k + 1) - i) + 1);
		if (des == NULL)
			return (NULL);
		j = 0;
		while (i <= k)
			des[j++] = s1[i++];
		des[j] = '\0';
	}
	else
	{
		des = malloc(1);
		*des = '\0';
	}
	return (des);
}
