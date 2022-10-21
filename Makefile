# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 14:21:23 by hmesrar           #+#    #+#              #
#    Updated: 2022/10/21 22:59:54 by hmesrar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_atoi.c ft_strdup.c \
		ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

FILES_B = 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c


OBJS = $(FILES:.c=.o)
OBJS_B = $(FILES_B:.c=.o)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $@ $^
	@echo "$(GREEN)--> Libft Library created!$(DEF_COLOR)"

all: $(NAME)

bonus: $(OBJS_B)
	$(AR) $(NAME) $^

clean:
	$(RM) $(OBJS) $(OBJS_B)
	@echo "$(RED)--> Objects cleaned successfully!$(DEF_COLOR)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED)--> Full clean successfully!$(DEF_COLOR)"

re: clean all
	@echo "$(GREEN)--> Refresh successfully!$(DEF_COLOR)"

.PHONY: bonus all clean fclean re



#Colors
DEF_COLOR =.c \033[0;39m
GREEN =.c \033[0;92m
RED =.c \033[0;91m
