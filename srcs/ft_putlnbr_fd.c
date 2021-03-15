/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:57:16 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 19:04:46 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

void	ft_putlnbr_fd(long n, int fd)
{
	unsigned long	abs;
	char			d;

	abs = n;
	if (n < 0)
	{
		abs = -n;
		write(fd, "-", 1);
	}
	if (abs > 9)
		ft_putlnbr_fd(abs / 10, fd);
	d = abs % 10 + '0';
	write (fd, &d, 1);
}
