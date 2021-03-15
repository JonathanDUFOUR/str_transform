/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_transform_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:09:56 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 00:43:05 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

static char	*init_config(void)
{
	char	*config;

	config = malloc(5 * sizeof(char));
	if (!config)
		return (NULL);
	config[0] = 0;
	config[1] = 0;
	config[2] = 0;
	config[3] = 0;
	config[4] = 0;
	return (config);
}

int	str_transform_s(char **options, int size)
{
	char	*content;
	char	*config;
	char	flag;
	int		ret;

	ft_putendl_fd("Running str_transform_s", STDOUT);
	content = NULL;
	config = init_config();
	if (!config)
		return (MALLOC_ERROR);
	while (size--)
	{
		flag = which_config_flag(options[size]);
		if (flag && !ft_strchr(config, flag))
			strcat_one(config, flag);
	}
	ft_putstr_fd("config == \"", STDOUT);
	ft_putstr_fd(config, STDOUT);
	ft_putstr_fd("\"\n", STDOUT);
	ret = get_file(&content);
	if (ret == SUCCESS)
	{
		ft_putendl_fd("content:", STDOUT);
		ft_putstr_fd(content, STDOUT);
	}
	if (content)
		free(content);
	free(config);
	return (ret);
}
