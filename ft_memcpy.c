void *ft_memcpy(void *dest, const void *src, int n)
{
    int i = 0;
    const char  *b = src;
    char  *v = dest;
    while (i < n)
    {
        v[i] = b[i];
        i++;
    }
    return dest;
}