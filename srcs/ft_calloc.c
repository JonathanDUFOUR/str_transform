/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:19:26 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 21:15:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*output;

	output = malloc(size * n);
	if (!n || !size || !output)
		return (NULL);
	ft_bzero(output, size * n);
	return (output);
}
