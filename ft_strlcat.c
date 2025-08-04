#include "libft.h"


size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i = 0;
	size_t	j = 0;

	if (dest == NULL && n == 0)
		return (ft_strlen((char *)src));

	while (dest[i] && i < n)
		i++;
	j = i;



	while (src[i - j] && i + 1 < n)
	{
		dest[i] = src[i - j];
		i++;
	}

	if (j < n)
		dest[i] = '\0';

	return (j + ft_strlen((char *)src));
}