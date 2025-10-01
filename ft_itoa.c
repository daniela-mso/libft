#include <stdlib.h>

static int	ft_intlen(long n)
{
	long	a;
	int		b;

	a = n > 0 ? n : -n;
	b = 1;
	while (a > 9)
	{
		a /= 10;
		b++;
	}
	if (n < 0)
		b++;
	return (b);
}

char	*ft_itoa(int n)
{
	long	new_n;
	int		b;
	char	*nb;
	int		i;

	new_n = (long)n;
	b = ft_intlen(new_n);
	nb = malloc(sizeof(char) * (b + 1));
	if (!nb)
		return (NULL);
	i = 0;
	if (new_n < 0)
	{
		nb[i++] = '-';
		new_n *= -1;
	}
	nb[b] = '\0';
	while (--b >= i)
	{
		nb[b] = (new_n % 10) + '0';
		new_n /= 10;
	}
	return (nb);
}


// converts the int into a string 
// need to find out the lengt of the int so i can allocate memory
 // int is 4 bytes char is 1
