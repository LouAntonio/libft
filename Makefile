# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/19 09:05:27 by lantonio          #+#    #+#              #
#    Updated: 2024/08/02 18:43:37 by lantonio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS		= -Wall -Wextra -Werror -g
CC			= cc
NAME		= libft.a
FLAGLIB		= -rcs
RM			= /bin/rm -f

SRC		= srcs/ft_atoi.c srcs/ft_isalnum.c srcs/ft_isalpha.c srcs/ft_isascii.c srcs/ft_isdigit.c\
				srcs/ft_isprint.c srcs/ft_memcmp.c srcs/ft_memset.c srcs/ft_strchr.c srcs/ft_strlcat.c\
				srcs/ft_strlcpy.c srcs/ft_strlen.c srcs/ft_strncmp.c srcs/ft_strnstr.c srcs/ft_strrchr.c\
				srcs/ft_tolower.c srcs/ft_toupper.c srcs/ft_bzero.c srcs/ft_calloc.c srcs/ft_memchr.c\
				srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_strdup.c srcs/ft_itoa.c srcs/ft_strtrim.c\
				srcs/ft_strmapi.c srcs/ft_striteri.c srcs/ft_putchar_fd.c srcs/ft_putstr_fd.c\
				srcs/ft_putendl_fd.c srcs/ft_putnbr_fd.c srcs/ft_substr.c srcs/ft_strjoin.c\
				srcs/ft_split.c

OBJ			= $(SRC:.c=.o)

BONUS		= srcs/ft_lstnew.c srcs/ft_lstadd_front.c srcs/ft_lstsize.c srcs/ft_lstlast.c\
				srcs/ft_lstadd_back.c srcs/ft_lstdelone.c srcs/ft_lstclear.c srcs/ft_lstiter.c\
				srcs/ft_lstmap.c


BONUS_OBJ	= $(BONUS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ) libft.h
			@echo "Linking $(NAME)"
			@ar $(FLAGLIB) $(NAME) $(OBJ)
			@ranlib $(NAME)

bonus:		$(BONUS_OBJ) $(NAME)
			@echo "Linking bonus"
			@ar $(FLAGLIB) $(NAME) $(BONUS_OBJ)
			@ranlib $(NAME)

.c.o:
			@echo "Compiling $(<)"
			@$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
			@echo "Cleaning"
			@$(RM) $(OBJ) $(BONUS_OBJ)

fclean:		clean
			@echo "Cleaning headers"
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all re clean fclean
