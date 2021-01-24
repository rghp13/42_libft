# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rponsonn <rponsonn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/24 15:09:42 by rponsonn          #+#    #+#              #
#    Updated: 2021/01/24 16:09:36 by rponsonn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	memset.c bzero.c memcpy.c memccpy.c memmove.c \
					memchr.c memcmp.c strlen.c strlcpy.c strlcat.c \
					strchr.c strrchr.c strnstr.c strncmp.c atoi.c \
					isalpha.c isdigit.c isalnum.c isascii.c isprint.c \
					toupper.c tolower.c calloc.c strdup.c substr.c \
					strjoin.c strtrim.c split.c itoa.c strmapi.c \
					putcharfd.c putstrfd.c putendlfd.c putnbrfd.c
OBJS			=	$(SRCS:.c=.o)

BONUS			=	lstnew.c lstaddfront.c lstsize.c lstlast.c \
					lstaddback.c lstdelone.c lstclear.c lstiter.c \
					lstmap.c
BOBJS			=	$(BONUS:.c=.o)

NAME			=	libft.a
CC				=	gcc
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror

.c.o:
				${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:		${OBJS}
				ar -rcs ${NAME} ${OBJS}
all:			${NAME}

clean:			
				${RM} ${OBJS} ${BOBJS}
fclean:			clean
				${RM} ${NAME}
re:				fclean ${NAME}
bonus:			${OBJS} ${BOBJS}
				ar -rcs ${NAME} ${OBJS} ${BOBJS}
.PHONY:			all clean fclean re bonus