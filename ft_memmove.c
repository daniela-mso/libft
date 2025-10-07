/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:49:13 by danielad          #+#    #+#             */
/*   Updated: 2025/10/04 11:36:57 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	long long	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (src < dst)
	{
		i = n ;
		while (--i >= 0)
			((char *)dst)[i] = ((const char *)src)[i];
	}
	else
	{
		i = -1;
		while (++i < (long long)n)
			((char *)dst)[i] = ((const char *)src)[i];
	}
	return (dst);
}
