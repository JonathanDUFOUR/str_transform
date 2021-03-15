/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 00:20:22 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 00:22:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!c)
		return (((char *)s) + ft_strlen(s));
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (((char *)s) + i);
		++i;
	}
	return (NULL);
}
