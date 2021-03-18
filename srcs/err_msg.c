/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_msg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 22:28:16 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/17 19:50:02 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"
#include "config.h"

int	err_msg(int err_code)
{
	if (err_code == READ_ERROR)
		ft_putendl_fd("\e[31mERROR: read() failed\e[0m", STDERR);
	else if (err_code == MALLOC_ERROR)
		ft_putendl_fd("\e[31mERROR: malloc() failed\e[0m", STDERR);
	else if (err_code == UNKNOWN_OPT_ERROR)
		ft_putendl_fd("\e[31mERROR: invalid option\e[0m", STDERR);
	return (42);
}
