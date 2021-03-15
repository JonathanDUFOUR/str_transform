/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:48:04 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 16:48:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

int	main(int ac, char **av)
{
	int		ret;
	char	**options;

	(void)ac;
	options = av + 1;
	if (!ft_strcmp(*av, "./str_transform_s"))
	{
		ft_putendl_fd("Running str_transform_s", STDOUT);
		ret = str_transform_s(options);
	}
	else
		return (err_msg(WRONG_BIN_NAME));
	if (ret != SUCCESS)
		return (err_msg(ret));
	return (SUCCESS);
}
