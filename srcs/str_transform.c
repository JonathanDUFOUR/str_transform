/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_transform.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:09:44 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 17:46:19 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

int	str_transform(char **options)
{
	char	**p;

	ft_putendl_fd("Running str_transform", STDOUT);
	p = options;
	ft_putendl_fd("options are :", STDOUT);
	while (*p)
	{
		ft_putendl_fd(*p, STDOUT);
		++p;
	}
	return (SUCCESS);
}
