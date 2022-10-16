# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 14:21:23 by hmesrar           #+#    #+#              #
#    Updated: 2022/10/16 18:51:33 by hmesrar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS_DIR = ./
FILES = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strncmp \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_strnstr \
		ft_atoi \
		ft_strdup \
		ft_calloc \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

FILES_B = 	ft_lstnew \
	  		ft_lstadd_front \
			ft_lstsize \
			ft_lstlast \
			ft_lstadd_back \
			ft_lstdelone \
			ft_lstclear \
			ft_lstiter \
			ft_lstmap

SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))


%.o : %.c
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
DEF_COLOR = \033[0;39m
GREEN = \033[0;92m
RED = \033[0;91m
