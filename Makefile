# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/07 21:59:43 by estruckm          #+#    #+#              #
#    Updated: 2023/01/09 15:57:18 by estruckm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	get_next_line.a
# Name des kompilierten Programms
SRCS	=	get_next_line_utils.c get_next_line.c
# Hier alle zu kompilierenden .c-Dateien erfassen
OBJS	=	${SRCS:.c=.o}
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
# Damit nur veränderte .c-Dateien in .o-Dateien kompiliert werden
RM		=	rm -f
# -f (force) macht fclean jederzeit ausführbar (auch ohne .o-Dateien)
CC		=	cc
# Kompiliersprache
CFLAGS	=	-Wall -Wextra -Werror

MAIN = main.c

all:		${NAME}
# Die verwendeten Flags
${NAME}:	${OBJS}
			ar rcs $(NAME) $(OBJS)

compile:
			$(CC) $(MAIN) $(NAME)

bonus: 		$(OBJS_BONUS)
			ar rcs ${NAME} ${OBJS_BONUS}
clean:
			${RM} ${OBJS}
# Löscht die .o-Dateien
fclean:		clean
			${RM} ${NAME}
# Löscht die .o- und exe-Dateien
re:			fclean all
# Löscht und rekompiliert
.PHONY:		all clean fclean re
# Führt die Befehle aus, auch wenn eine gleichnamige Datei existiert




