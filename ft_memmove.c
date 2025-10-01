#include <stddef.h>
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	long long	i;
    const char	*b;
    char	*v;

    i = 0;
	b = src;
	v = dst;

	if (!dst && !src)
		return (NULL);
    if(src < dst)
    {
        i = n - 1;
        while (i  >= 0)
        {
            v[i] = b[i];
            i--;
        }
    }
    else 
    {
        while (i < (long long)n)
        {
            v[i] = b[i];
            i++;
        }
    }
    return dst;

	
}
