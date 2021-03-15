/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:29:53 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 21:31:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*output;
	char	*p;
	size_t	size;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	size = ft_strlen(s1) + ft_strlen(s2);
	output = ft_calloc((size + 1), sizeof(char));
	if (!output)
		return (NULL);
	p = output;
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = '\0';
	return (output);
}
