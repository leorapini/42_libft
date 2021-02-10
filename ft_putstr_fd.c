/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 22:05:12 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/09 22:55:54 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include "ft_putchar_fd.c"

void	ft_putstr_fd(char *s, int fd)
{	
	if (s != 0 && fd >= 0)
	{
		while (*s != 0)
		{
			write(fd, s, 1);
			s++;
		}	
	}	
}
