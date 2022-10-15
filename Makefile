# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 14:21:23 by hmesrar           #+#    #+#              #
#    Updated: 2022/10/15 22:10:18 by hmesrar          ###   ########.fr        #
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
	@echo "$(GREEN) $< compiled! $(DEF_COLOR)"

$(NAME): $(OBJS)
	$(AR) $@ $^
	echo "$(GREEN)Libft Library created!$(DEF_COLOR)"

all: $(NAME)

bonus: $(OBJS_B)
	@$(AR) $(NAME) $^
	@echo "$(GREEN)Libft bonus compiled!$(DEF_COLOR)"

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re



#Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m



# NAME = libft.a

# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# AR = ar rcs
# RM = rm -f

# FILES = ft_memset \
# 		ft_bzero \
# 		ft_memcpy \
# 		ft_memccpy \
# 		ft_memmove \
# 		ft_memchr \
# 		ft_memcmp \
# 		ft_strlen \
# 		ft_strlcpy \
# 		ft_strlcat \
# 		ft_strchr \
# 		ft_strrchr \
# 		ft_strnstr \
# 		ft_strncmp \
# 		ft_atoi \
# 		ft_isalpha \
# 		ft_isdigit \
# 		ft_isalnum \
# 		ft_isascii \
# 		ft_isprint \
# 		ft_toupper \
# 		ft_tolower \
# 		ft_calloc \
# 		ft_strdup \
# 		ft_substr \
# 		ft_strjoin \
# 		ft_strtrim \
# 		ft_split \
# 		ft_itoa \
# 		ft_strmapi \
# 		ft_putchar_fd \
# 		ft_putstr_fd \
# 		ft_putendl_fd \
# 		ft_putnbr_fd \
# 		ft_strtok \
# 		ft_strcmp \
# 		get_next_line \

# FILES_B = 	ft_lstnew \
# 	  		ft_lstadd_front \
# 	  		ft_lstsize \
# 	  		ft_lstlast \
# 	  		ft_lstadd_back \
# 	  		ft_lstdelone \
# 	  		ft_lstclear \
# 	  		ft_lstiter \
# 	  		ft_lstmap

# SRCS_DIR = ./
# SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
# SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

# OBJS_DIR = ./
# OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
# OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))


# .c.o: $(SRCS)
# 	$(CC) $(CFLAGS) -c -o $@ $<

# $(NAME): $(OBJS)
# 	$(AR) $@ $^

# bonus: $(OBJS_B)
# 	$(AR) $(NAME) $^

# all: $(NAME)

# clean:
# 	$(RM) $(OBJS) $(OBJS_B)

# fclean: clean
# 	$(RM) $(NAME)

# re: clean all

# .PHONY: bonus all clean fclean re
