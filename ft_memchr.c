#include <stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i = 0;
    char *str = (char *)s;

    while (i < n)
    {
        if (str[i] == c)
            return ((void *)(str + i));
        i++;
    }
    return (NULL);
}


// int main(void)
// {
//     char *str = "Hello mista";
//     int ch = 'm';
//     size_t len = 15;

//     char *result= ft_memchr(str, ch, len);

//     printf("%s\n", result);

//     return 0;
// }