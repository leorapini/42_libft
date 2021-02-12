/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 09:38:43 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/11 23:41:28 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*found;
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && len > 0)
	{
		j = 0;
		found = 0;
		while ((int)haystack[i] == (int)needle[j])
		{
			if (found == 0)
				found = &haystack[i];
			if (needle[j + 1] == 0)
				return ((char *)found);
			i++;
			j++;
		}
		if (found != 0)
			i--;
		i++;
	}
	return (0);
}
