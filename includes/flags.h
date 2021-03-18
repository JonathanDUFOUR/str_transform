/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 21:26:47 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/18 16:36:53 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H

# include <stdbool.h>
# include "api.h"
# include "context.h"
# include "types/t_flagfield.h"

# define FLAG_LINES		(1 << 0)	/*	-n	*/
# define FLAG_LENGTH	(1 << 1)	/*	-L	*/
# define FLAG_WORDS		(1 << 2)	/*	-W	*/
# define FLAG_DASH		(1 << 3)	/*	-	*/

typedef t_flagfield	t_flag;

bool	is_flag_set(const t_ctxp ctx, const t_flag flag) API;
void	set_flag(t_ctxp ctx, const t_flag flag) API;
void	toggle_flag(t_ctxp ctx, const t_flag flag) API;
void	unset_flag(t_ctxp ctx, const t_flag flag) API;
void	reset_flag(t_ctxp ctx) API;

#endif
