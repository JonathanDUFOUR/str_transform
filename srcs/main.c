/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:22:03 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 17:46:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

int	main(int ac, char **av)
{
	int		ret;
	char	**options;

	(void)ac;
	options = av + 1;
	if (!ft_strcmp(*av, "./str_transform"))
		ret = str_transform(options);
	else
		return (err_msg(WRONG_BIN_NAME));
	if (ret != SUCCESS)
		return (err_msg(ret));
	return (SUCCESS);
}
