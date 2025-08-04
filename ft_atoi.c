#include "libft.h"

int	ft_atoi(const char *num)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while ((num[i] >= 9 && num[i] <= 13) || num [i] == ' ')
		i++;
	if(num[i] == '-' || num[i] == '+')
	{
		if(num[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(num[i]))
	{
		result = result * 10 + (num[i] - '0');
		i++;
	}
	return (result * sign);
}

