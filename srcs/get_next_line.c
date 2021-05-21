/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 11:37:31 by lpinheir          #+#    #+#             */
/*   Updated: 2021/05/21 12:21:30 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_break(char *buff, char **line)
{
	int		str_len;
	char	*overflow;

	str_len = 0;
	if (buff[0] == '\0')
		return (0);
	overflow = ft_strchr(buff, 10);
	if (overflow == NULL)
		return (0);
	while (buff[str_len] != '\0' && buff[str_len] != '\n')
		str_len++;
	if (buff[0] == '\n')
		*line = ft_strdup("");
	else
		*line = ft_substr(buff, 0, str_len);
	ft_bzero(buff, str_len);
	ft_strlcpy(buff, overflow + 1, ft_strlen(overflow));
	return (1);
}

static char	*new_storage(char *storage, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(storage, buffer);
	free(storage);
	storage = temp;
	return (storage);
}	

static int	read_buffer(int fd, char **storage, char **line)
{
	char	*buffer;
	int		len_read;

	buffer = malloc(sizeof(*buffer) * BUFFER_SIZE + 1);
	if (!buffer)
		return (-1);
	len_read = read(fd, buffer, BUFFER_SIZE);
	while (len_read > 0)
	{
		buffer[len_read] = '\0';
		*storage = new_storage(*storage, buffer);
		if (find_break(*storage, line) == 1)
		{
			free(buffer);
			return (1);
		}
		len_read = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	if (len_read < 0)
		return (-1);
	else
		return (0);
}
