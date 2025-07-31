int	ft_atoi(const char *num)
{
	int i = 0;
	int sign = 1;
	int result;
	while ((num[i] >= 9 && num[i] <= 13) || num [i] == ' ')
		i++;
	while(num[i] == '-' || num[i] == '+')
	{
		if(num[i] == '-')
			sign *= -1;
		i++;
	}
	while (num[i] != '\0' && num[i] >= '0' && num[i] <= '9')
	{
		result = result * 10 + (num[i] - '0');
		i++;
	}
	return (result * sign);
}