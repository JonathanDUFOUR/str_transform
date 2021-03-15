/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_transform_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:09:56 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 16:43:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

int	str_transform_s(char **options)
{
	char	**p;

	p = options;
	ft_putendl_fd("options are :", STDOUT);
	while (*p)
	{
		ft_putendl_fd(*p, STDOUT);
		++p;
	}
	return (SUCCESS);
}
