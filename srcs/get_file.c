/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:05:19 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 20:49:25 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

int	get_file(char **content)
{
	ssize_t	read_ret;
	char	*buff;
	char	*dent;

	(void)read_ret;
	buff = malloc((BUFF_SIZE + 1) * sizeof(char));
	if (!(buff))
		return (MALLOC_ERROR);
	read_ret = read(STDIN, buff, BUFF_SIZE);
	while (read_ret > 0)
	{
		dent = *content;
		*content = ft_strjoin(*content, buff);
		if (dent)
			free(dent);
		read_ret = read(STDIN, buff, BUFF_SIZE);
	}
	free(buff);
	return (read_ret);
}
