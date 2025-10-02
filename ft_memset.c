/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:47:26 by danielad          #+#    #+#             */
/*   Updated: 2025/10/02 16:48:54 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dst, int c, int n)
{
	unsigned char	*a;
	unsigned char	fill_byte;
	int				i;

	a = dst;
	fill_byte = c;
	i = 0;
	while (i < n)
	{
		a[i] = fill_byte;
		i++;
	}
	return (dst);
}
