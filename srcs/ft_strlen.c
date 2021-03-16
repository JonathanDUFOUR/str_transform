/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:11:11 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 16:30:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

size_t	ft_strlen(char *s)
{
	register char	*p;

	p = s;
	while (*p)
		++p;
	return (p - s);
}
