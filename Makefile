# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/14 15:35:16 by jodufour          #+#    #+#              #
#    Updated: 2021/03/14 23:14:05 by jodufour         ###   ########.fr        #
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
				main.c				\
				err_msg.c			\
				ft_split.c			\
				ft_strlen.c			\
				ft_strcmp.c			\
				ft_putstr_fd.c		\
				ft_putendl_fd.c		\

STS_SRCS	:=	\
				${COMMON_SRCS}		\
				str_transform_s.c	\

STL_SRCS	:=	\
				${COMMON_SRCS}		\
				str_transform_l.c	\

STSL_SRCS	:=	\
				${COMMON_SRCS}		\
				str_transform_s.c	\
				str_transform_l.c	\

STS_OBJS	:=	${addprefix ${OBJD}, ${STS_SRCS:.c=.o}}
STL_OBJS	:=	${addprefix ${OBJD}, ${STL_SRCS:.c=.o}}
STSL_OBJS	:=	${addprefix ${OBJD}, ${STSL_SRCS:.c=.o}}

${NAME}:	${STSL_OBJS}
	${LINKER} $@ $^

${NAME}_s:	${STS_OBJS}
	${LINKER} $@ $^

${NAME}_l:	${STL_OBJS}
	${LINKER} $@ $^

all:	${NAME}

${OBJD}%.o:	${SRCD}%.c
	${MAKEDIR} ${dir $@}
	${CC} $@ ${CFLAGS} $<

clean:
	${RM} ${OBJD}

fclean:
	${RM} ${OBJD} ${NAME} ${NAME}_s ${NAME}_l

re:	fclean all

.PHONY:	all clean fclean re
