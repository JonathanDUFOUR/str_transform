/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:58:25 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 21:30:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>

size_t	ft_file_size(char *f)
{
	struct stat	st;

	if (!stat(f, &st))
		return (st.st_size);
	return (-1);
}
