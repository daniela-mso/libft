#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i = 0;
    char *new_s = malloc(sizeof(char) * ft_strlen(s) + 1);
    if(!new_s)
        return NULL;
    while (s[i] != '\0')
    {
        new_s[i] = (*f)(i, s[i]);
        i++;
    }
    new_s[i] = '\0';
    return new_s;
}