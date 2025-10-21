/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:42:39 by danielad          #+#    #+#             */
/*   Updated: 2025/10/21 15:51:18 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	len;
	char	*new_string;

	len = n;
	new_string = malloc(sizeof(char) * (len + 1));
	if (new_string == NULL)
		return (NULL);
	ft_memcpy(new_string, s, len);
	new_string[len] = '\0';
	return (new_string);
}

int	count_splits(const char *str, char c)
{
	int		index;
	int		nb_str;
	int		inside;

	index = -1;
	nb_str = 0;
	inside = 1;
	while (str[++index] != '\0')
	{
		if (str[index] != c && inside == 1)
		{
			inside = 0;
			nb_str++;
		}
		else if (str[index] == c)
			inside = 1;
	}
	return (nb_str);
}

char	**ft_split(const char *str, char c)
{
	int		index;
	char	**splited;
	int		position;
	int		begin;

	if (str == NULL)
		return (NULL);
	splited = malloc(sizeof(char *) * (count_splits(str, c) + 1));
	if (splited == NULL)
		return (NULL);
	index = 0;
	position = 0;
	while (str[position] != '\0')
	{
		while (str[position] == c)
			position++;
		if (str[position] == '\0')
			break ;
		begin = position;
		while (str[position] != c && str[position] != '\0')
			position++;
		splited[index++] = ft_strndup(str + begin, (position -1) - begin + 1);
	}
	splited[index] = NULL;
	return (splited);
}
