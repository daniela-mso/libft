#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	const char	*n1;
	const char	*n2;
	int	i;

	n1 = s1;
	n2 = s2;
	if (!s1 || !s2)
		return (NULL);
	char *str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (*n1)
	{
		str[i] = *n1;
		i++;
		n1++;
	}
	while (*n2)
	{
		str[i] = *n2;
		i++;
		n2++;
	}
	str[i] = '\0';
	return (str);
}
