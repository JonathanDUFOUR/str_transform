/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_transform_l.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:10:09 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 17:45:55 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

int	str_transform_l(char **options)
{
	char	**p;

	ft_putendl_fd("Running str_transform_l", STDOUT);
	p = options;
	ft_putendl_fd("options are :", STDOUT);
	while (*p)
	{
		ft_putendl_fd(*p, STDOUT);
		++p;
	}
	return (SUCCESS);
}
