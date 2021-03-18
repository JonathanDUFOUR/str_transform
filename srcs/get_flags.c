/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:40:28 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/18 16:28:22 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "context.h"
#include "str_transform.h"
#include "options.h"
#include "flags.h"

int	get_flags(int ac, char **av, t_ctxp ctx)
{
	int	opt;

	opt = getopt(ac, av, OPTIONS);
	while (opt != -1)
	{
		ft_putstr_fd("opt == '", STDOUT);
		ft_putchar_fd(opt, STDOUT);
		ft_putstr_fd("'\n", STDOUT);
		if (opt == '?')
			return (UNKNOWN_OPT_ERROR);
		else if (opt == 'n')
			set_flag(ctx, FLAG_LINES);
		else if (opt == 'L')
			set_flag(ctx, FLAG_LENGTH);
		else if (opt == 'W')
			set_flag(ctx, FLAG_WORDS);
		else if (opt == 0)
			set_flag(ctx, FLAG_DASH);
		opt = getopt(ac, av, OPTIONS);
	}
	return (SUCCESS);
}
