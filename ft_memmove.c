void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i = 0;


	if (!dst && !src)
		return (NULL);
    if(src < dest)
    {
        i = ft_strlen(src);
        while (i >= 0)
        {
        dest[i] = src[i];
        i--;
        }
        return dest;
    }

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}


8