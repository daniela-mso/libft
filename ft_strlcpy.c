#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i = 0;

	if (n != 0)
	{
		while (src[i] && i < n - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}

	while (src[i])
		i++;

	return (i);
}