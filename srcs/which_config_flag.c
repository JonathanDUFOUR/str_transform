/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_config_flag.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 22:16:52 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 00:27:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

char	which_config_flag(char *option)
{
	if (!ft_strcmp(option, "-f"))
		return ('f');
	if (!ft_strcmp(option, "-o"))
		return ('o');
	if (!ft_strcmp(option, "-w"))
		return ('w');
	if (!ft_strcmp(option, "-s"))
		return ('s');
	if (!ft_strcmp(option, "-"))
		return ('-');
	return (0);
}
