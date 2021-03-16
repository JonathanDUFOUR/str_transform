/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 21:40:08 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 22:10:36 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

bool	is_flag_set(const t_env *const myenv, const t_flag flag)
{
	return ((myenv->flags & flag) == flag);
}

void	set_flag(t_env *const myenv, const t_flag flag)
{
	myenv->flags |= flag;
}

void	toggle_flag(t_env *const myenv, const t_flag flag)
{
	myenv->flags ^= flag;
}

void	unset_flag(t_env *const myenv, const t_flag flag)
{
	myenv->flags &= ~flag;
}

void	reset_flag(t_env *const myenv)
{
	myenv->flags = 0u;
}
