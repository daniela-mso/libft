/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:50:15 by danielad          #+#    #+#             */
/*   Updated: 2025/10/02 16:52:14 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int			i;
	const char	*b;
	char		*v;

	if (!dest && !src)
		return (NULL);
	i = 0;
	b = src;
	v = dest;
	while (i < n)
	{
		v[i] = b[i];
		i++;
	}
	return (dest);
}
