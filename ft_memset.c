void *ft_memset(void *dst, int c, int n)
{
    unsigned char *a = dst;
    unsigned char fill_byte = c;
    int i = 0;
    while (i < n)
    {
        a[i] = fill_byte;
        i++;
    }
    return dst;
}