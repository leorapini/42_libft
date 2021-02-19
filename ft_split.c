/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:04:50 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/12 19:54:44 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	occur(char const *s, char c)
{
	int	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	count;

	count = occur(s, c);
	if (count == 0)
		return (NULL);
	result = malloc(sizeof(char*) * count + 2);
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count + 2)
	{
		if (*s == c || *s == '\0')
		{
			result[j] = (char*)malloc(sizeof(char) * (i + 1));
			if (result[j] == NULL)
				return (NULL);
			ft_strlcpy(result[j], s - i, i + 1);
			j++;
			i = 0;
		}
		i++;
		s++;
	}
	result[j] = NULL;;
	return (result);
}
