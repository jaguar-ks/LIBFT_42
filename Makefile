# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAkefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 00:28:28 by faksouss          #+#    #+#              #
#    Updated: 2022/10/13 04:30:17 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_MD = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c\
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
		ft_strdup.c ft_striteri.c ft_strjoin.c  ft_strlcat.c ft_strlcpy.c ft_strlen.c\
		ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c\
		ft_toupper.c

SRCS_BUN = ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstdelone.c\
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

FLAGS = -Wall -Wextra -Werror -c

CC = cc

OBJS_MD = ${SRCS_MD:.c=.o}

OBJS_BUN = ${SRCS_BUN:.c=.o}

HEADER = libft.h

NAME = libft.a

RM = rm -f

%.o : %.c ${HEADER}
	${CC} ${FLAGS} $< -o $@

${NAME} : ${OBJS_MD}
	ar -rc $@ ${OBJS_MD}

bonus : ${OBJS_MD} ${OBJS_BUN} ${HEADER}
	ar -rc ${NAME} ${OBJS_MD} ${OBJS_BUN}

all : ${NAME}

clean :
	${RM} ${OBJS_MD} ${OBJS_BUN}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
