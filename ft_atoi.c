/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:58:38 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/19 18:19:36 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\r' ||
			c == '\t' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *src)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	if (*src == 0)
		return (0);
	while (ft_isspace(*src))
		src++;
	if (*src == 45 || *src == 43)
	{
		if (*src == 45)
			sign = sign * -1;
		src++;
	}
	while (*src >= 48 && *src <= 57)
	{
		result = (result * 10) + (*src - '0');
		src++;
	}
	return (sign * result);
}
