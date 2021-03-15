# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/14 15:35:16 by jodufour          #+#    #+#              #
#    Updated: 2021/03/15 21:00:51 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	str_transform
CC			=	gcc -c -o
LINKER		=	gcc -o
MAKEDIR		=	mkdir -p
RM			=	rm -rf

SRCD		=	srcs/
OBJD		=	objs/

INCLUDES	=	includes

CFLAGS		:=	-Wall -Wextra -ansi -I ${INCLUDES}

COMMON_SRCS	:=	\
				err_msg.c			\
				get_file.c			\
				ft_bzero.c			\
				ft_split.c			\
				ft_calloc.c			\
				ft_strdup.c			\
				ft_strlen.c			\
				ft_strcmp.c			\
				ft_strjoin.c		\
				ft_file_size.c		\
				ft_putstr_fd.c		\
				ft_putchar_fd.c		\
				ft_putlnbr_fd.c		\
				ft_putendl_fd.c		\

STS_SRCS	:=	\
				main_s.c			\
				str_transform_s.c	\
				${COMMON_SRCS}		\

STL_SRCS	:=	\
				main_l.c			\
				str_transform_l.c	\
				${COMMON_SRCS}		\

STSL_SRCS	:=	\
				main.c			\
				str_transform.c	\
				${COMMON_SRCS}	\

STS_OBJS	:=	${addprefix ${OBJD}, ${STS_SRCS:.c=.o}}
STL_OBJS	:=	${addprefix ${OBJD}, ${STL_SRCS:.c=.o}}
STSL_OBJS	:=	${addprefix ${OBJD}, ${STSL_SRCS:.c=.o}}

all:	${NAME}_s ${NAME}_l ${NAME}

${NAME}:	${STSL_OBJS}
	${LINKER} $@ $^

${NAME}_s:	${STS_OBJS}
	${LINKER} $@ $^

${NAME}_l:	${STL_OBJS}
	${LINKER} $@ $^

${OBJD}%.o:	${SRCD}%.c
	${MAKEDIR} ${dir $@}
	${CC} $@ ${CFLAGS} $<

clean:
	${RM} ${OBJD}

fclean:
	${RM} ${OBJD} ${NAME} ${NAME}_s ${NAME}_l

re:	fclean all

re_s:	fclean ${NAME}_s

re_l:	fclean ${NAME}_l

re_sl:	fclean ${NAME}

.PHONY:	all clean fclean re
