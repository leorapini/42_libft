/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:48:50 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/09 19:57:32 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include "ft_strlen.c"
#include "ft_strncmp.c"
#include "ft_memcpy.c"
#include "ft_strlcpy.c"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	size_t	lens1;
	size_t	lenset;
	size_t	lenbuffer;
	int	start;
	int	end;

	lens1 = ft_strlen(s1);
	lenset = ft_strlen(set);
	lenbuffer = lens1;
	start = ft_strncmp(s1, set, lenset);
	end = ft_strncmp(s1 + lens1 - lenset, set, lenset);
	if (start == 0)
		lenbuffer = lenbuffer - lenset;
	if (end == 0)
		lenbuffer = lenbuffer - lenset;
	buffer = (char *)malloc(sizeof(*s1) * (lenbuffer + 1)); 
	if (buffer == NULL)
		return (NULL);
	if ((lenbuffer == lens1) || (start != 0 && end == 0))
		ft_strlcpy(buffer, s1, lenbuffer + 1);
	else
		ft_strlcpy(buffer, s1 + lenset, lenbuffer + 1);
	return (buffer);
}	
