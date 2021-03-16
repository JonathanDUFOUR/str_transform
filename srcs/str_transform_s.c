/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_transform_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:09:56 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 22:16:50 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"
#include "types/t_env.h"
#include "config.h"

int	str_transform_s(int ac, char **av)
{
	t_env		*myenv;
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
