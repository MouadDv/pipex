# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yahachad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 16:26:06 by yahachad          #+#    #+#              #
#    Updated: 2019/10/30 03:11:32 by milmi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRCS = ft_lstadd_back.c ft_lstlast.c ft_size.c ft_lstadd_front.c ft_lstnew.c ft_strtrim.c ft_substr.c ft_calloc.c ft_itoa.c ft_substr.c ft_strmapi.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_isalnum.c ft_isascii.c  ft_memccpy.c  ft_atoi.c ft_strnstr.c ft_strrchr.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_calloc.c ft_strdup.c ft_isprint.c    ft_memset.c ft_strncmp.c    ft_toupper.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_strlen.c ft_tolower.c  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c  
OBJECTS = $(SRCS:.c=.o)
INCLUDES=./
all: $(NAME)
$(NAME): $(SRCS) libft.h
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
bonus:
	echo "bonus"
clean:
	/bin/rm -f $(OBJECTS)
fclean: clean
	/bin/rm -f $(NAME)
re:	fclean all
