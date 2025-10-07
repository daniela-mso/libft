/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:42:39 by danielad          #+#    #+#             */
/*   Updated: 2025/10/04 11:40:55 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

#include "libft.h"

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	len;
	char	*new_string;

	len = 0;
	while (len < n && s[len] != '\0')
		len++;
	new_string = malloc(sizeof(char) * len + 1);
	if (!new_string)
		return (NULL);
	ft_memcpy(new_string, s, len);
	new_string[len] = '\0';
	return (new_string);
}

int	count_splits(const char *str, char c)
{
	int		index;
	int		nb_str;
	bool	inside;

	index = -1;
	nb_str = 0;
	inside = false;
	while (str[++index] != '\0')
	{
		if (str[index] != c && !inside)
		{
			inside = true;
			nb_str++;
		}
		else if (str[index] == c)
			inside = false;
	}
	return (nb_str);
}

char	**ft_split(const char *str, char c)
{
	int		index;
	char	**spited;
	int		position;
	int		begin;

	if (!str)
		return (NULL);
	spited = malloc(sizeof(char *) * (count_splits(str, c) + 1));
	if (!spited)
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
		spited[index++] = ft_strndup(str + begin, (position -1) - begin + 1);
	}
	spited[index] = NULL;
	return (spited);
}
