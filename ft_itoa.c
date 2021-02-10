/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:11:20 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/09 21:10:51 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getlen(long int num, int sign)
{
	int	length;

	length = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 10;
		length++;
	}
	if (sign < 0)
		length++;
	return (length);
}

char		*ft_itoa(int n)
{
	char	*buffer;
	int	len;
	int	sign;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = n * sign;
	}
	len = ft_getlen(n, sign);
	buffer = (char *)malloc(sizeof(char) * len + 1);
	if (buffer == NULL)
		return (NULL);
	if (n == 0)
		buffer[0] = '0';
	while (n != 0 && len >= 0)
	{
		buffer[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	if (sign == -1)
		buffer[0] = '-';
	return (buffer);
}
