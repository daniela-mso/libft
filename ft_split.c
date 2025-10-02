/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 16:42:39 by danielad          #+#    #+#             */
/*   Updated: 2025/10/02 16:42:40 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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

char	**ft_split(const char *str, char c)
{
	if (!str)
		return (NULL);

	int index = 0;
	int nb_str = 0;
	int inside = 0;

	while (str[index] != '\0')
	{
		if (str[index] != c && inside == 0)
		{
			inside = 1;
			nb_str++;
		}
		else if (str[index] == c)
			inside = 0;
		index++;
	}
	char **sp = malloc(sizeof(char *) * (nb_str + 1));
	if (!sp)
		return (NULL);

	int i = 0;
	int posicao = 0;

	while (str[posicao] != '\0')
	{
		while (str[posicao] == c)
			posicao++;
		if (str[posicao] == '\0')
			break ;

		int inicio = posicao;
		while (str[posicao] != c && str[posicao] != '\0')
			posicao++;
		int fim = posicao - 1;

		sp[i++] = ft_strndup(str + inicio, fim - inicio + 1);
	}
	sp[i] = NULL;
	return (sp);
}