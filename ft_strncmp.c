#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t len1 = ft_strlen(s1) + 1;
	size_t len2 = ft_strlen(s2) + 1;
	size_t minlen = len1 < len2 ? len1 : len2 ;
	if (minlen > n)
		minlen = n;
	return ft_memcmp(s1, s2, minlen);
}