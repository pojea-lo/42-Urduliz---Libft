/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pojea-lo <pojea-lo@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:38:03 by pojea-lo          #+#    #+#             */
/*   Updated: 2021/11/09 17:38:21 by pojea-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c);
static char		*ft_copy(char const *s, int i, int j);

char	**ft_split(char const *s, char c)
{
	char	**r;
	int		i;
	int		j;
	int		l;

	i = 0;
	l = 0;
	r = (char **)malloc (sizeof(char *) * (ft_count(s, c) + 1));
	if (r == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] != c && i < (int)ft_strlen(s))
				i++;
			r[l] = ft_copy(s, i, j);
			l++;
		}
		else
			i++;
	}
	r[l] = NULL;
	return (r);
}

static char	*ft_copy(char const *s, int i, int j)
{
	char	*r;
	int		m;

	m = 0;
	r = (char *)malloc (sizeof(char) * (((i - 1) - j) + 2));
	if (r == NULL)
		return (NULL);
	while (j <= (i - 1))
		r[m++] = (char)s[j++];
	r[m] = '\0';
	return (r);
}

static size_t	ft_count(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (s[0] != c && s[0] != '\0')
		count++;
	while (s[i + 1] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}
