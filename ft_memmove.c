/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:49:13 by danielad          #+#    #+#             */
/*   Updated: 2025/10/03 13:41:19 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**void	*ft_memmove(void *dst, const void *src, size_t n)
{
	long long	i;
	const char	*b;
	char		*v;

	i = 0;
	b = src;
	v = dst;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		i = n - 1;
		while (i >= 0)
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
	return (dst);
}**/


static long long	i_size(void *dst, const void *src, size_t n)
{
	long long i;

	i = 0;
	if (src < dst)
		i = n - 1;
	return (i);
}


void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const char	*b;
	char		*v;
	long long	i;

	i = i_size(dst, src, n);
	b = src;
	v = dst;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (i >= 0)
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
	return (dst);
}