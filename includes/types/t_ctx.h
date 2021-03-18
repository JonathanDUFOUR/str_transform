/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ctx.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 21:00:50 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 22:28:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_CTX_H
# define T_CTX_H

# include "types/t_queue.h"
# include "types/t_flagfield.h"

typedef	struct s_ctx	t_ctx;

struct s_ctx
{
	t_flagfield			flags;
	t_ransforms_queue	transforms;
};

#endif
