/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 21:26:47 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 22:11:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H

# include <stdbool.h>
# include "types/t_flagfield.h"
# include "types/t_env.h"

# define FLAG_LINES		(1 << 0)
# define FLAG_LENGTH	(1 << 1)
# define FLAG_WORDS		(1 << 2)
# define FLAG_DASH		(1 << 3)

typedef t_flagfield	t_flag;

bool	is_flag_set(const t_env *const myenv, const t_flag flag);
void	set_flag(t_env *const myenv, const t_flag flag);
void	toggle_flag(t_env *const myenv, const t_flag flag);
void	unset_flag(t_env *const myenv, const t_flag flag);
void	reset_flag(t_env *const myenv);

#endif
