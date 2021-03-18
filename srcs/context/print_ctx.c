/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ctx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:13:34 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/18 16:23:02 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"
#include "context.h"
#include "config.h"
#include "flags.h"

void	print_ctx(t_ctxp ctx)
{
	ft_putstr_fd("ctx->flag ==", STDOUT);
	if (is_flag_set(ctx, FLAG_LINES))
		ft_putstr_fd(" -n", STDOUT);
	if (is_flag_set(ctx, FLAG_LENGTH))
		ft_putstr_fd(" -L", STDOUT);
	if (is_flag_set(ctx, FLAG_WORDS))
		ft_putstr_fd(" -W", STDOUT);
	if (is_flag_set(ctx, FLAG_DASH))
		ft_putstr_fd(" -", STDOUT);
	write(1, "\n", 1);
}
