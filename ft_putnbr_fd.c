/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 23:26:44 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/11 23:28:10 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	unsigned int	u_n;
	char		c_print;

	if (fd >= 0)
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			u_n = n * -1;
		}
		else
			u_n = n;
		if (u_n > 9)
			ft_putnbr_fd(u_n / 10, fd);
		c_print = (u_n % 10) + '0';
		write(fd, &c_print, 1);
	}
}
