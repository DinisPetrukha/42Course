# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpetrukh <dpetrukh@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 11:58:06 by dpetrukh          #+#    #+#              #
#    Updated: 2023/10/18 12:47:15 by dpetrukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =  ft_substr.c ft_isalpha.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c \
	ft_atoi.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_strlen.c ft_isalpha.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
	ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_tolower.c ft_toupper.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_putchar_fd.c \
	ft_putnbr_fd.c  ft_putstr_fd.c ft_putendl_fd.c ft_striteri.c ft_strmapi.c \
	ft_split.c

OBJS = $(SRCS:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_CONV = $(BONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME) clean

$(NAME) : $(OBJS)
	ar -crs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_CONV)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS_CONV)
	ar -crs   $(NAME) $(OBJS) $(BONUS_CONV)
