/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_transform_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:09:56 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 20:51:57 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"
#include "config.h"
#include "types/t_transform.h"

int	str_transform_s(int ac, char **av)
{
	char		*content;
	int			ret;

	ft_putendl_fd("Running str_transform_s", STDOUT);
	ret = get_file(&content);
	if (ret == SUCCESS)
	{
		ft_putendl_fd("content:", STDOUT);
		ft_putstr_fd(content, STDOUT);
	}
	free(content);
	return (ret);
}
