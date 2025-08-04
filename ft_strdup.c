#include <stdlib.h>

char *ft_strdup(const char *s)
{
	size_t	i = 0;
	char *dup;

	while (s[i])
		i++;

	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);

	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';

	return (dup);
}

