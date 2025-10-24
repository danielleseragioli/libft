# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 18:37:04 by dseragio          #+#    #+#              #
#    Updated: 2025/10/23 18:30:44 by dseragio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -fr 

SRCS = ft_atoi.c ft_isascii.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c \
	   ft_strlen.c ft_strtrim.c ft_bzero.c ft_isdigit.c ft_memcpy.c \
	   ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c \
	   ft_calloc.c ft_isprint.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c \
	   ft_strncmp.c ft_tolower.c ft_isalnum.c ft_itoa.c ft_memset.c ft_split.c \
	   ft_strlcat.c ft_strnstr.c ft_toupper.c ft_isalpha.c ft_memchr.c \
	   ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c

BONUS = ft_lstiter_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c \
		ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c

OBJS = ${SRCS:.c=.o}
OBJS_BN = ${BONUS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus: .bonus	

.bonus: ${OBJS_BN} ${OBJS}
	touch .bonus
	ar rcs ${NAME} ${OBJS_BN} ${OBJS}

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS} ${OBJS_BN}
	${RM} .bonus

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
