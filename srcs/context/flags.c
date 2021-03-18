/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 21:40:08 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 23:00:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

bool	is_flag_set(const t_ctxp ctx, const t_flag flag)
{
	return ((ctx->flags & flag) == flag);
}

void	set_flag(t_ctxp ctx, const t_flag flag)
{
	ctx->flags |= flag;
}

void	toggle_flag(t_ctxp ctx, const t_flag flag)
{
	ctx->flags ^= flag;
}

void	unset_flag(t_ctxp ctx, const t_flag flag)
{
	ctx->flags &= ~flag;
}

void	reset_flag(t_ctxp ctx)
{
	ctx->flags = 0u;
}
