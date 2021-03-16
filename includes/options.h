/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:06:20 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 20:14:47 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTIONS_H
# define OPTIONS_H

# include <stdlib.h>
# include "types/t_opt.h"

# define OPTIONS "rculnLWfosw"

static const t_opt	g_options[] = {
	{'r', NULL},
	{'c', NULL},
	{'u', NULL},
	{'l', NULL},
	{'n', NULL},
	{'L', NULL},
	{'W', NULL},
	{'f', NULL},
	{'o', NULL},
	{'s', NULL},
	{'w', NULL},
	{0, NULL}
};

#endif
