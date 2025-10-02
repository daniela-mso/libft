/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:14:57 by danielad          #+#    #+#             */
/*   Updated: 2025/10/02 16:18:36 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	size_t			len;

	start = 0;
	end = ft_strlen(s1) - 1;
	len = 0;
	if (s1[0] == '\0')
		return (ft_strdup(""));
	while (s1[start])
	{
		if (!ft_strchr(set, s1[start]))
			break ;
		start++;
	}
	while (end >= start)
	{
		if (!ft_strchr(set, s1[end]))
			break ;
		end--;
	}
	len = end - start + 1;
	return (ft_substr(s1, start, len));
}
