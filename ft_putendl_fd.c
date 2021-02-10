/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 22:30:20 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/09 22:54:37 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include "ft_putchar_fd.c"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != 0 && fd >= 0)
	{
		while (*s != 0)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}
