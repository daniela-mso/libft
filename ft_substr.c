/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:11:55 by danielad          #+#    #+#             */
/*   Updated: 2025/10/02 16:14:14 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;

	i = 0;
	if (s == NULL)
		return (NULL);
	subs = malloc(sizeof(char) * len + 1);
	if (subs == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		start = (unsigned int)ft_strlen(s);
	while (i < len)
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	subs[i] = '\0';
	return (subs);
}

// Allocates memory (using malloc(3)) and returns a
// substring from the string ’s’.
// The substring starts at index ’start’ and has a
// maximum length of ’len’.