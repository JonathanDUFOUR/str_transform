/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:22:03 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/14 23:09:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

int	main(int ac, char **av)
{
	if (ac > 1)
		return (err_msg(WRONG_AC));
	if (!ft_strcmp(*av, "./str_transform_s"))
	{
		ft_putendl_fd("Running str_transform_s", STDOUT);
	}
	else if (!ft_strcmp(*av, "./str_transform_l"))
	{
		ft_putendl_fd("Running str_transform_l", STDOUT);
	}
	else if (!ft_strcmp(*av, "./str_transform"))
	{
		ft_putendl_fd("Running str_transform", STDOUT);
	}
	else
	{
		return (err_msg(WRONG_BIN_NAME));
	}
	return (SUCCESS);
}
