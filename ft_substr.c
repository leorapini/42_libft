/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:38:56 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/19 18:08:47 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	int	i;

	i = 0;
	buffer = (char *)malloc(sizeof(*s) * (len + 1));
	if (buffer == NULL)
		return (NULL);
	while (len > 0)
	{
		buffer[i] = s[start];
		i++;
		start++;
		len--;
	}
	buffer[i] = 0;
	return (buffer);
}
