/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:48:04 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/18 16:33:52 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"
#include "types/t_ctx.h"
#include "config.h"
#include "flags.h"

int	main(int ac, char **av)
{
	int		ret;
	t_ctx	ctx;
	t_ctxp	ctxp = &ctx;

	reset_flag(ctxp);
	ret = str_transform_s(ac, av, ctxp);
	if (ret != SUCCESS)
		return (err_msg(ret));
	return (SUCCESS);
}
