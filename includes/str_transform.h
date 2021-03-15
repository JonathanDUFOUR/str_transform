/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_transform.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:22:45 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/15 22:00:25 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_TRANSFORM_H
# define STR_TRANSFORM_H

# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define SUCCESS 0
# define STDIN 0
# define STDOUT 1
# define STDERR 2
# define BUFF_SIZE 16384

enum	e_rror_code
{
	READ_ERROR = -1,
	WRONG_BIN_NAME,
	MALLOC_ERROR
};

enum	e_config_flags
{
	f,
	o,
	s,
	w,
	T
};

int		err_msg(int err_code);
int		get_file(char **buff);
int		ft_strcmp(char *s1, char *s2);
int		str_transform(char **options, int size);
int		str_transform_s(char **options, int size);
int		str_transform_l(char **options, int size);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putlnbr_fd(long n, int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t n, size_t size);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strdup(char const *s);
size_t	ft_strlen(const char *s);
size_t	ft_file_size(char *f);

#endif
