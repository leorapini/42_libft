/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 17:48:19 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/05 09:52:00 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_strlen.c" // tirar

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	counter;
	size_t	total;	
	
	total = ft_strlen(src);
	srcsize = total + 1;
	counter = 0;
	if (srcsize <= dstsize)
	{	
		while (*src != 0)
		{
			*dst = *src;
			src++;
			dst++;
			counter++;
		}
	}
	else
	{
		while (counter++ < dstsize)
		{
		
			*dst = *src;
			src++;
			dst++;
		}
		*dst = 0;
	}
	return (total);
}

