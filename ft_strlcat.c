/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:01:46 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/12 00:59:25 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	total;
	size_t	counter;

	srclen = ft_strlen(src);
	total = srclen + ft_strlen(dst);
	counter = 0;
	if (dstsize == 0)
		return (srclen);
	while (*dst != 0)
	{
		dst++;
		counter++;
	}
	while (*src != 0 && counter < (total - 1))
	{
		*dst = *src;
		src++;
		dst++;
		counter++;
	}
	*dst = 0;
	return (srclen);
}
