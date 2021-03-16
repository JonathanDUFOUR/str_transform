/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:48:04 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 20:42:25 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"
#include "config.h"

int	main(int ac, char **av)
{
	int		ret;

	(void)ac;
	if (!ft_strcmp(*av, "./str_transform_s"))
		ret = str_transform_s(ac, av);
	else
		return (err_msg(WRONG_BIN_NAME));
	if (ret != SUCCESS)
		return (err_msg(ret));
	return (SUCCESS);
}
