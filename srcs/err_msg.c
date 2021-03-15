/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_msg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 22:28:16 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 18:49:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

int	err_msg(int err_code)
{
	if (err_code == READ_ERROR)
		ft_putendl_fd("\e[31mERROR: read() failed\e[0m", STDERR);
	else if (err_code == WRONG_BIN_NAME)
		ft_putendl_fd("\e[31mERROR: Binary file name invalid\e[0m", STDERR);
	else if (err_code == MALLOC_ERROR)
		ft_putendl_fd("\e[31mERROR: malloc() failed\e[0m", STDERR);
	return (42);
}
