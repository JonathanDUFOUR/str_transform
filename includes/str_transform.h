/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_transform.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:22:45 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 15:50:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_TRANSFORM_H
# define STR_TRANSFORM_H

# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>

# define SUCCESS 0
# define STDIN 0
# define STDOUT 1
# define STDERR 2

enum	e_rror_code
{
	WRONG_AC,
	WRONG_BIN_NAME
};

int		err_msg(int err_code);
int		ft_strcmp(char *s1, char *s2);
int		str_transform_s(char **options);
int		str_transform_l(char **options);
int		str_transform(char **options);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
size_t	ft_strlen(char *s);

#endif
