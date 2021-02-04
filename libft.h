/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:56:56 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/04 17:18:56 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
void	ft_putchar(char c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isprint(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);

#endif

