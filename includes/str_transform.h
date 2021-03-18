/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_transform.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:22:45 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/18 16:23:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_TRANSFORM_H
# define STR_TRANSFORM_H

# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdbool.h>
# include <getopt.h>
# include "context.h"

enum	e_ret_code
{
	READ_ERROR = -1,
	SUCCESS,
	MALLOC_ERROR,
	UNKNOWN_OPT_ERROR
};

int		err_msg(int err_code);
int		get_file(char **buff);
int		get_flags(int ac, char **av, t_ctxp ctx);
int		ft_strcmp(char *s1, char *s2);
int		str_transform(int ac, char **av, t_ctxp ctx);
int		str_transform_s(int ac, char **av, t_ctxp ctx);
int		str_transform_l(int ac, char **av, t_ctxp ctx);
void	print_ctx(t_ctxp ctx);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putlnbr_fd(long n, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	*ft_calloc(size_t n, size_t size);
char	which_config_flag(char *option);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s);
size_t	ft_file_size(char *f);
size_t	ft_strlen(char *s);

#endif
