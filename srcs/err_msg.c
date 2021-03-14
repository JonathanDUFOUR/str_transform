/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_msg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 22:28:16 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/14 23:11:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

int	err_msg(int err_code)
{
	if (err_code == WRONG_AC)
		ft_putendl_fd("ERROR: This program doesn't need any argument", STDERR);
	else if (err_code == WRONG_BIN_NAME)
		ft_putendl_fd("ERROR: The binary file has not a valid name", STDERR);
	return (42);
}
