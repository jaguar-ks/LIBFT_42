# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAkefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 00:28:28 by faksouss          #+#    #+#              #
#    Updated: 2022/10/11 02:12:30 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(shell echo *.c)

CC = gcc

FLAGS = -Wall -Wextra -Werror -c

OBJS = ${SRCS:.c=.o}

HEADER = libft.h

NAME = libft.a

RM = rm -f

%.o : %.c ${HEADER}
	${CC} ${FLAGS} $< -o $@

${NAME} : ${OBJS}
	ar -rc $@ ${OBJS}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : clean all fclean re