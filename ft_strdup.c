#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	char *dup;

	dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dup == NULL)
		return (NULL);
	
	ft_strcpy(dup, s);

	return (dup);
}

