/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:28:02 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 18:12:36 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_transform.h"

char	*ft_strdup(char *str)
{
	char	*output;
	int		len;
	int		i;

	len = ft_strlen(str);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
	{
		return (NULL);
	}
	i = -1;
	while (str[++i])
	{
		output[i] = str[i];
	}
	output[i] = 0;
	return (output);
}
