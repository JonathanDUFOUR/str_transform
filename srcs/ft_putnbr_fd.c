/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 23:18:20 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 23:21:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned	abs;
	char		d;

	abs = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		abs = -n;
	}
	if (abs > 9)
		ft_putnbr_fd(abs / 10, fd);
	d = abs % 10 + '0';
	write(fd, &d, 1);
}
