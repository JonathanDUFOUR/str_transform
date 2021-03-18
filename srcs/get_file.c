/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:05:19 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 23:20:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"
#include "config.h"

int	get_file(char **content)
{
	ssize_t	read_ret;
	char	buff[BUFF_SIZE + 1];
	char	*dent;

	read_ret = read(STDIN, buff, BUFF_SIZE);
	while (read_ret > 0)
	{
		buff[read_ret] = 0;
		dent = *content;
		*content = ft_strjoin(*content, buff);
		free(dent);
		read_ret = read(STDIN, buff, BUFF_SIZE);
	}
	return (read_ret);
}
