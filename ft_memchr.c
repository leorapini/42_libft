/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:59:47 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/08 17:16:25 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	target;
	unsigned char	*ptr;

	target = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == c)
			return (void *)ptr;
		ptr++;
		n--;
	}
	return (0);
}
