#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*des;
	
	des = malloc (len + 1);
	if (des == NULL)
		return (NULL);
	ft_bzero((void *)s, start - 1);
	des = ft_memmove ((void *)des, (const void *)s, len);
	return (des);
}
