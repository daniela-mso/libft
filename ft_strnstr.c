#include <stdio.h>


char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i = 0;
	size_t	j;

    if(little == NULL)
        return NULL;
	if (*little == '\0')
		return ((char *)big);

	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && (i + j) < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}