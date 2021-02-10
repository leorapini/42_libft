/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:04:50 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/10 15:51:00 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_strlcpy.c"
#include <stdio.h>

size_t	occur(char const *s, char c)
{
	int 	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{	
	char	**result;;
	size_t	i;
	size_t	j;
	size_t	count;
	
	count = occur(s, c);
	if (count == 0)
		return (NULL);
	printf("total strings: %zu\n", count);
	result = malloc(sizeof(char*) * count);
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count)
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
	return (result);
}
