/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_transform_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:09:56 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 22:06:01 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

static void	init_config(int *config[5])
{
	config[0] = -1;
	config[1] = -1;
	config[2] = -1;
	config[3] = -1;
	config[4] = -1;
}

int	str_transform_s(char **options, int size)
{
	char	*content;
	int		config[5];
	int		ret;

	ft_putendl_fd("Running str_transform_s", STDOUT);
	content = NULL;
	init_config(&config);
	ret = get_file(&content);
	if (ret == SUCCESS)
	{
		ft_putendl_fd("content:", STDOUT);
		ft_putstr_fd(content, STDOUT);
		while (size--)
		{
			options;
		}
	}
	if (content)
		free(content);
	return (ret);
}
