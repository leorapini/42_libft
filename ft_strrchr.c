/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:08:34 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/12 00:49:56 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	char		target;
	const char	*found;
	
	target = (unsigned char)c;
	found = 0;
	while (*s != 0)
	{
		if (*s == target)
			found = s;
		s++;
	}
	return ((char *)found);
}
